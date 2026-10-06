/******************************************************************************
Made in OnlineGDB by C.J. Merendino
Lab 2 - Program 1 - Sum of Two Numbers
This program calculates and displays the sum of two integers.
*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    // Store assigned integers
    int value1 = 50;
    int value2 = 100;
    
    // Variable to hold the calculated sum
    int total;

    // Calculate sum
    total = value1 + value2;

    // Display result
    cout << "The sum of the two values is: " << total << endl;

    return 0;
}