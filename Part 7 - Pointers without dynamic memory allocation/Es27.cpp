/* EXERCISE 27

An evaporator is a machine into which an initial quantity of water is introduced,
and each day it loses a fixed percentage of water to the environment.
When the water level falls below a minimum threshold, the machine turns off to prevent damage.
Write a function that takes as arguments:
- a float representing the initial liters of water introduced into the machine;
- an int representing the daily evaporation percentage;
- a float indicating the minimum threshold below which the machine shuts down;

and returns the number of days the machine can continue to operate without being refilled.
Assume all arguments are always non-negative. */

#include <iostream>
using namespace std;

void printData(float liters, int percent, float minimum);
int daysLeft(float liters, int percent, float minimum);

int main()
{
    float liters, minimum;
    int percent;

    cout << "Enter the amount of water in liters to add: ";
    cin >> liters;

    cout << "Enter the daily evaporation percentage as an integer: ";
    cin >> percent;

    cout << "Enter the minimum water threshold below which the machine shuts off: ";
    cin >> minimum;

    cout << endl;

    // Print the input data
    printData(liters, percent, minimum);

    // Calculate and print the remaining days of autonomy
    cout << endl;
    int remainingDays = daysLeft(liters, percent, minimum);
    cout << "The water level will reach the minimum threshold in " << remainingDays << " days!" << endl;

    return 0;
}

// Function to print the input data
void printData(float liters, int percent, float minimum)
{
    cout << "You entered: " << liters << " liters." << endl;
    cout << "The daily evaporation percentage is: " << percent << "%" << endl;
    cout << "The minimum required water threshold is: " << minimum << " liters." << endl;
}

// Function to calculate the remaining days
int daysLeft(float liters, int percent, float minimum)
{
    // Input validation: return -1 if any input is negative
    if (liters < 0 || percent < 0 || minimum < 0)
    {
        return -1;
    }

    float currentLiters = liters;
    int daysRemaining = 0;

    while (currentLiters >= minimum)
    {
        currentLiters = currentLiters - ((currentLiters * percent) / 100.0f); // Note 100.0f to ensure float division
        daysRemaining++;
    }

    return daysRemaining;
}
