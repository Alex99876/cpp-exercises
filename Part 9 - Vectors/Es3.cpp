#include <iostream>
#include <string>
using namespace std;

struct dynamic_array
{
    int *store;        // pointer to the CONTENT of the array stored on the heap
    unsigned int size; // CURRENT size of the array - dynamic array
};

void delete_d_array(dynamic_array &d);

int main()
{
    dynamic_array d;
    d.size = 5;
    d.store = new int[d.size];  // allochiamo memoria
    
    // Popoliamo array (solo per test)
    for (unsigned int i = 0; i < d.size; ++i)
        d.store[i] = i;
    
    // Deallocazione corretta
    try {
        delete_d_array(d);
        cout << "Array deallocato correttamente. Nuova dimensione: " << d.size << endl;
    }
    catch (const string& e) {
        cout << "Eccezione: " << e << endl;
    }
    
    // Tentativo di doppia deallocazione, dovrebbe lanciare eccezione
    try {
        delete_d_array(d);
    }
    catch (const string& e) {
        cout << "Eccezione al secondo tentativo: " << e << endl;
    }
}

void delete_d_array(dynamic_array &d)
{
    // Sarebbe doppia deallocazione se size è 0 o memoria non allocata
    if (d.size == 0 || d.store == nullptr)
        throw string("Errore: deallocazione non consentita.");
    
    delete[] d.store;
    d.store = nullptr;  // importante azzerare il puntatore dopo delete
    d.size = 0;
}
