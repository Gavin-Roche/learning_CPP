/*
    Seasonal_Car_Hire.cpp
    This program calculates the cost of hiring a car based on the month and number of rental days.
    - Rental is not available in January, February, November, or December.
    - Different seasonal rates apply based on the month.
    - Discounts apply for long-term rentals.
*/

#include <iostream>
using namespace std;

int main()
{
    int hireMonth, daysHire, seasonalRate = 0;
    double totalCost, discount = 0.0;

    // Get a valid hire month
    do
    {
        cout << "\nPlease enter the hire month (1 to 12): ";
        cin >> hireMonth;

        if (hireMonth == 1 || hireMonth == 2 || hireMonth == 11 || hireMonth == 12)
        {
            cout << "We do not rent during this time. Please choose a valid month.\n";
        }
    } while (hireMonth < 1 || hireMonth > 12 || hireMonth == 1 || hireMonth == 2 || hireMonth == 11 || hireMonth == 12);

    // Get a valid number of days for hire
    do
    {
        cout << "Please enter the number of days you want to hire for: ";
        cin >> daysHire;

        if (daysHire <= 0)
            cout << "Invalid input. Days hired must be greater than zero.\n";
    } while (daysHire <= 0);

    // Determine seasonal rate
    switch (hireMonth)
    {
        case 3: case 4:
            seasonalRate = 100;
            break;
        case 5: case 6: case 9: case 10:
            seasonalRate = 250;
            break;
        case 7: case 8:
            seasonalRate = 400;
            break;
    }

    // Calculate discount
    if (daysHire > 60)
        discount = 0.15;
    else if (daysHire > 30)
        discount = 0.10;
    else if (daysHire > 15)
        discount = 0.05;

    // Calculate total cost
    totalCost = (seasonalRate * daysHire) * (1 - discount);

    // Display result
    cout << "\nThe cost of renting is " << totalCost << " euros.\n";

    return 0;
}
