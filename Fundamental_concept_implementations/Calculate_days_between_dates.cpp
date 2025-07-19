/*
    This program calculates the number of days between two given dates.
    - It assumes both dates are within the same year.
    - Leap years are not fully accounted for.
*/

#include <iostream>
using namespace std;

int NumDays(int DD_1, int MM_1, int DD_2, int MM_2); // Function prototype

int main()
{
    int DD_1, MM_1, DD_2, MM_2, days;

    // User input for first date
    cout << "Input day 1: ";
    cin >> DD_1;
    cout << "Input month 1: ";
    cin >> MM_1;

    // User input for second date
    cout << "Input day 2: ";
    cin >> DD_2;
    cout << "Input month 2: ";
    cin >> MM_2;

    // Calculate the number of days between the two dates
    days = NumDays(DD_1, MM_1, DD_2, MM_2);
    cout << "The number of days is: " << days << endl;
}

// Function to calculate the number of days between two dates
int NumDays(int DD_1, int MM_1, int DD_2, int MM_2)
{
    // Array storing days in each month (ignoring leap years for now)
    int daysInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    int totalDays = 0;

    // If both dates are in the same month, directly subtract the days
    if (MM_1 == MM_2)
        return DD_2 - DD_1;

    // Add remaining days in the first month
    totalDays += (daysInMonth[MM_1 - 1] - DD_1);

    // Add days in full months between the two dates
    for (int i = MM_1; i < MM_2 - 1; i++)
        totalDays += daysInMonth[i];

    // Add days in the second month
    totalDays += DD_2;

    return totalDays;
}
