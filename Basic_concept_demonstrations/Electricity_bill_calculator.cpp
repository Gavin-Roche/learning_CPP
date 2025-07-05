/*
    Program to calculate an electricity bill based on meter readings.
    The user inputs the present and previous meter readings.
    The program accounts for meter rollover and calculates the total cost.
*/

#include <iostream>
using namespace std;

int main()
{
    // Initialize variables
    int previous, present, units = 0;
    const double unit_charge = 0.05;   // Cost per unit of electricity
    const double standard_charge = 20.0; // Fixed standing charge
    double cost;  // Changed to double for accurate calculation

    // Prompt user to input readings
    cout << "Enter the present and previous readings: ";
    cin >> present >> previous;

    // Adjust for meter rollover (if present reading is smaller than previous)
    if (present < previous)
        present += 10000;

    // Calculate cost
    cost = (present - previous) * unit_charge + standard_charge;

    // Display total cost
    cout << "This will cost = " << cost;
}
