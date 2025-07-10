/*
    Program to determine the season based on the month number.
    - The user enters a month number (1-12).
    - The program outputs the corresponding season:
        - Spring: February, March, April
        - Summer: May, June, July
        - Autumn: August, September, October
        - Winter: November, December, January
    - If input is out of range, it defaults to winter (implicit handling).
*/

#include <iostream>
using namespace std;

int main()
{
    int month;

    // Prompt user for input
    cout << "Input the number of the month: ";
    cin >> month;

    // Determine season based on month number
    if (month == 2 || month == 3 || month == 4)
        cout << "Spring";
    else if (month == 5 || month == 6 || month == 7)
        cout << "Summer";
    else if (month == 8 || month == 9 || month == 10)
        cout << "Autumn";
    else
        cout << "Winter";  // Includes months 1, 11, 12 and invalid inputs implicitly
}
