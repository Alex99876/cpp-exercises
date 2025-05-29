#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm> // for transforming input to lowercase

using namespace std;

int main()
{
    int n;
    int total = 0;     // initialized to zero
    int count = 0;     // initialized to zero
    string response;

    do
    {
        cout << "Enter a number: ";
        cin >> n;

        total += n;
        count++;

        cout << "Do you want to continue? Yes/No: ";
        cin >> response;

        // Convert the response to lowercase
        transform(response.begin(), response.end(), response.begin(), ::tolower);

    } while (response == "yes");

    // Avoid division by zero if no numbers were entered
    if (count == 0)
    {
        cout << "No numbers were entered. Average cannot be calculated." << endl;
    }
    else
    {
        float average = static_cast<float>(total) / count;
        cout << fixed << setprecision(2) << "The average is: " << average << endl;
    }

    return 0;
}
