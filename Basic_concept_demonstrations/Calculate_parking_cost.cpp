/*
    Calculate_Parking_Cost.cpp
    This program calculates the cost of parking based on the number of hours parked.
    - First 3 hours cost a flat rate of £3.
    - Additional hours cost £0.50 per hour.
    - Maximum charge is capped at £10.
*/

#include <iostream>
#include <iomanip> // For formatting output
using namespace std;

double ParkCost(int hours); // Function prototype

int main()
{
    int hours;

    // Get user input
    cout << "Please input the number of hours that you parked for: ";
    cin >> hours;

    // Ensure valid input (no negative hours)
    if (hours < 0)
    {
        cout << "Invalid input. Hours cannot be negative." << endl;
        return 1; // Exit program with an error code
    }

    // Display the total parking cost with two decimal places
    cout << fixed << setprecision(2);
    cout << "This will cost: £" << ParkCost(hours) << endl;

    return 0;
}

// Function to calculate parking cost based on hours
double ParkCost(int hours)
{
    double totalCost;

    if (hours <= 3)
        totalCost = 3.0; // Base charge for up to 3 hours
    else
        totalCost = 3.0 + (hours - 3) * 0.5; // Additional hours cost £0.50 each
    
    if (totalCost > 10.0)
        totalCost = 10.0; // Maximum charge cap

    return totalCost;
}
