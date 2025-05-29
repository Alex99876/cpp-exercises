// EXERCISE 7

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Define a struct Contact_Str containing at least the fields Name, Surname, PhoneNumber (with appropriate types)
struct Contact_Str
{
    string Name;
    string Surname;
    int PhoneNumber;
};

// Create a vector type of contacts named PhoneBook using typedef: typedef vector<Contact_Str> PhoneBook
typedef vector<Contact_Str> PhoneBook;

// PROTOTYPES
void add(PhoneBook& B, string surname, string name, int phoneNumber);
void input(PhoneBook &B);
void print(const PhoneBook& B);
void sortSurnames(PhoneBook& B);

int main()
{
    PhoneBook phonebook;
    
    // Input data - test the add function
    cout << "Enter phonebook data: name, surname and number. Type STOP to end input \n";
    input(phonebook);
    
    // Test the print function
    cout << endl;
    cout << "You entered the following phonebook: \n";
    print(phonebook);
    
    // Test sorting algorithm by surname
    cout << endl;
    cout << "Sorted phonebook: \n";
    sortSurnames(phonebook);
    print(phonebook);
}

// FUNCTION TO ADD A CONTACT C TO THE END OF PHONEBOOK B
void add(PhoneBook &B, string surname, string name, int phoneNumber)
{
    // Create a new struct for the new contact
    Contact_Str new_contact;
    new_contact.Name = name;
    new_contact.Surname = surname;
    new_contact.PhoneNumber = phoneNumber;
    
    // Insert the new contact at the end
    B.push_back(new_contact);
}

// FUNCTION FOR DATA INPUT
void input(PhoneBook &B)
{
    string name;
    string surname;
    int phonenumber;
    
    // Read contact data
    Contact_Str new_contact;
    
    cin >> name;
    
    while (name != "STOP")
    {
        cin >> surname;
        cin >> phonenumber;
        
        // Call the add function to add the contact
        add(B, surname, name, phonenumber);
        
        // Request next name input to allow STOP
        cin >> name;
    }
}

// FUNCTION TO PRINT PHONEBOOK CONTENT
void print(const PhoneBook &B)
{
    for(unsigned int i = 0; i < B.size(); ++i)
    {
        cout << i << " | " << B[i].Name << " " << B[i].Surname << " " << B[i].PhoneNumber << endl;
    }
}

// FUNCTION TO SORT THE PHONEBOOK BY SURNAME IN ALPHABETICAL ORDER
// Using the insertion sort algorithm
void sortSurnames(PhoneBook& B)
{
    for (int i = 1; i < B.size(); ++i)
    {
        // j moves backward, checking from the end
        for(int j = i; (j > 0 && (B[j].Surname < B[j-1].Surname)); --j)
        {
            // SWAP using a temporary variable
            Contact_Str temp = B[j];
            B[j] = B[j-1];
            B[j-1] = temp;
        }
    }
}
