/* EXERCISE 27

An evaporator is a machine where an initial quantity of water is inserted,
and every day it loses a fixed percentage of water to the environment.
When the water level falls below the minimum operating threshold, the machine shuts off to prevent damage.

[VARIANT]
Write a VOID function that takes as arguments:
- a float representing the liters of water initially introduced into the machine;
- an int representing the daily evaporation percentage;
- a float indicating the minimum threshold below which the machine shuts off;

The function should return the number of days the machine can continue to operate without being refilled.
Assume all arguments are always non-negative.
Remember that a VOID function does not return a value. You need to use pass-by-reference. */

#include <iostream>
using namespace std;

void printData(float liters, int percent, float minThreshold);
void daysLeft(float liters, int percent, float minThreshold, int& dayCount);

int main()
{
    float liters, minThreshold;
    int percent;

    cout << "Enter how many liters of water you want to add: ";
    cin >> liters;

    cout << "Enter the daily evaporation percentage as an integer: ";
    cin >> percent;

    cout << "Enter the minimum water threshold below which the machine shuts off: ";
    cin >> minThreshold;

    cout << endl;

    // Print entered data
    printData(liters, percent, minThreshold);
    cout << endl;

    // Print the number of operating days left given the liters of water inserted
    // Since daysLeft is a void function, to get the number of days we must pass it by reference
    int dayCount = 0;
    daysLeft(liters, percent, minThreshold, dayCount);

    // dayCount now holds the result modified inside the daysLeft function
    cout << "The water level will reach the minimum threshold in " << dayCount << " days!" << endl;

    return 0;
}

// Function to print the entered data
void printData(float liters, int percent, float minThreshold)
{
    cout << "You entered: " << liters << " liters." << endl;
    cout << "Daily evaporation percentage: " << percent << "%" << endl;
    cout << "Minimum required water threshold: " << minThreshold << " liters." << endl;
}

// VOID function to calculate the remaining days, updating dayCount by reference
void daysLeft(float liters, int percent, float minThreshold, int& dayCount)
{
    float currentLiters = liters;

    while (currentLiters >= minThreshold)
    {
        currentLiters = currentLiters - ((currentLiters * percent) / 100.0f); // Make sure to use float division!
        dayCount++;
    }
}
