/******************************************************************************
Made in OnlineGDB by C.J. Merendino
Lab 2 - Program 2 - Miles Per Gallon
This program calculates and displays a car's miles per gallon (MPG)
*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    // Store assigned miles and gallons as doubles to preserve fractions
    double miles = 312.0;
    double gallons = 16.0;
    
    // Variable to hold the calculated MPG
    double miles_per_gallon;

    // Calculate miles per gallon
    miles_per_gallon = miles / gallons;

    // Display result
    cout << "The car gets " << miles_per_gallon << " miles per gallon." << endl;

    return 0;
}