#include <iostream>
#include <string>
#include <stdexcept> // for standard exceptions
using namespace std;

struct dynamic_array
{
    int *store;
    int size;
};

// Function that creates a dynamic array
dynamic_array create(int size)
{
    if (size <= 0)
        throw string("Invalid size.");

    dynamic_array new_array;
    new_array.store = new int[size];
    new_array.size = size;
    return new_array;
}

// Function to deallocate dynamic array
void delete_d_array(dynamic_array &d)
{
    if (d.store != nullptr)
        delete[] d.store;
    d.store = nullptr;
    d.size = 0;
}

// Function to print the array
void print_array(const dynamic_array &d)
{
    for (int i = 0; i < d.size; ++i)
        cout << d.store[i] << " ";
    cout << endl;
}

// d_array_sort function with the three requested algorithms
void d_array_sort(dynamic_array &d, const string &s)
{
    if (s == "selectionsort")
    {
        for (int i = 0; i < d.size - 1; ++i)
        {
            int smallestIndex = i;
            for (int j = i + 1; j < d.size; ++j)
            {
                if (d.store[j] < d.store[smallestIndex])
                    smallestIndex = j;
            }
            // swap
            int temp = d.store[smallestIndex];
            d.store[smallestIndex] = d.store[i];
            d.store[i] = temp;
        }
    }
    else if (s == "insertsort")
    {
        for (int i = 1; i < d.size; ++i)
        {
            int temp = d.store[i];
            int location = i;
            while (location > 0 && d.store[location - 1] > temp)
            {
                d.store[location] = d.store[location - 1];
                location--;
            }
            d.store[location] = temp;
        }
    }
    else if (s == "bubblesort")
    {
        for (int i = 0; i < d.size - 1; ++i)
        {
            for (int j = 0; j < d.size - 1 - i; ++j)
            {
                if (d.store[j] > d.store[j + 1])
                {
                    int temp = d.store[j];
                    d.store[j] = d.store[j + 1];
                    d.store[j + 1] = temp;
                }
            }
        }
    }
    else
    {
        throw string("Sorting algorithm not recognized.");
    }
}

int main()
{
    try
    {
        dynamic_array d = create(5);

        // initialize the array (example)
        for (int i = 0; i < d.size; ++i)
            d.store[i] = 5 - i;

        cout << "Array before sorting: ";
        print_array(d);

        // Sort with an algorithm (example: selectionsort)
        d_array_sort(d, "selectionsort");

        cout << "Array after selectionsort: ";
        print_array(d);

        // Try with an invalid algorithm (to test exception)
        // d_array_sort(d, "quicksort"); // <-- uncomment to see exception

        delete_d_array(d);
    }
    catch (const string &e)
    {
        cout << "Exception: " << e << endl;
    }
    return 0;
}
