// EXERCISE: LINKED LIST IMPLEMENTATION (Not present in exercise book)
// Implement a singly linked list
// Write functions useful for a list - refer to the exercise done live on 30.11

#include <iostream>
#include <string>
using namespace std;

// CELL IMPLEMENTATION: the content is strings
struct cell_impl
{
    string content;
    cell_impl* next;
};

// Redefine struct cell_impl as cell
typedef struct cell_impl cell;

// Define a pointer to cell named list
// Wherever you see cell* in the code, you can replace it with list
// list is a cell object that contains a pointer to the next element
typedef cell* list;

void headInsert(list &l, string x);
void read(list &l);
void tailInsert(list &l, string x);
void print(const list l);
void deleteAll(list &l);

int main()
{
    list L1 = nullptr;
    headInsert(L1, "head1");
    headInsert(L1, "head2");
    headInsert(L1, "head3");
    
    // read(L1);
    
    // They will be printed in reverse order because they were inserted at the head:
    // head3, head2, head1
    // The first inserted will be at the tail, second in the middle,
    // the third at the head (the first element)
    // print(L1);
    
    tailInsert(L1, "tail1");
    tailInsert(L1, "tail2");
    tailInsert(L1, "tail3");
    
    print(L1);
    
    deleteAll(L1);
    
    print(L1);
}

// INSERT AN ELEMENT AT THE HEAD OF THE LIST
void headInsert(list &l, string x)
{
    cell* aux = new cell;
    aux->content = x;
    aux->next = l;
    
    l = aux;
}

/* READ VALUES FROM INPUT AND STORE THEM IN THE LIST
   The function must not release the memory pointed to by l,
   but must allocate the necessary memory to store the list elements.
   After the call l == head of the read list */
void read(list &l)
{
    // Define a string variable for input
    // It will also be used to allow the user to input a stop string to end insertion
    string input;
    cout << "Enter an element to insert into the list or press N to stop insertion: " << endl;
    cin >> input;
    
    // Loop until the user inputs 'N'
    while(input != "N" )
    {
        headInsert(l, input);
        
        cout << "Enter an element to insert into the list or press N to stop insertion: " << endl;
        cin >> input;
    }
}

// INSERT AN ELEMENT AT THE TAIL OF THE LIST
void tailInsert(list &l, string x)
{
    // Create a new cell, update its content, and set the next pointer
    // When adding at the tail, the next pointer must be null (nullptr)
    cell* aux = new cell;
    aux->content = x;
    aux->next = nullptr;
    
    // Create a variable tail and initialize it to l, because we don't want to change the head of the list (which is l)
    // l is the first cell of the list, identifies the first element
    // Basically, make a copy of the pointer, we want to find the cell corresponding to the tail of l - the end of the list
    cell* tail = l;
    
    // First, check if the list is empty
    if (tail == nullptr) {
        l = aux;  // If the list is empty, the new cell is the head
        return;
    }
    
    // Traverse the list until the last element (tail) whose next pointer is nullptr
    while(tail->next != nullptr)
    {
        tail = tail->next;
    }
    
    // After the loop, tail points to the last element,
    // now update its next pointer to the new cell aux
    tail->next = aux;
}

// PRINT THE LIST: list (pointer) is passed as const, make a copy to iterate because
// inside the while loop we update the pointer to next
void print(const list l)
{
    // Make a copy of the pointer to the cell
    list listCopy = l;
    cout << "Printing list:" << endl;
    
    while(listCopy != nullptr)
    {
        // listCopy points to a single cell
        cout << "Element: " << listCopy->content << endl;
        
        // Update listCopy to the next element
        listCopy = listCopy->next;
    }
}

// DELETE ALL ELEMENTS IN THE LIST AND FREE MEMORY
void deleteAll(list &l)
{
    // Save the head and delete one by one until nullptr
    while (l != nullptr)
    {
        cell* currentCell = l;       // create a new pointer initialized to the head l
        l = currentCell->next;       // update the head to the next element
        delete currentCell;          // delete the previous head
    }       
}
