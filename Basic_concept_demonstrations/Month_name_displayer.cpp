/*
    Program to display the name of a month based on the user's input.
    - The user enters a month number (1-12).
    - The program outputs the corresponding month name.
    - If the input is not between 1 and 12, an error message is displayed.
*/

#include <iostream>
using namespace std;

int main()
{
    int month;

    // Prompt user for input
    cout << "Please enter the month number: ";
    cin >> month;

    // Determine month name based on input
    switch (month)
    {
    case 1:
        cout << "January\n";
        break;
    case 2:
        cout << "February\n";
        break;
    case 3:
        cout << "March\n";
        break;
    case 4:
        cout << "April\n";
        break;
    case 5:
        cout << "May\n";
        break;
    case 6:
        cout << "June\n";
        break;
    case 7:
        cout << "July\n";
        break;
    case 8:
        cout << "August\n";
        break;
    case 9:
        cout << "September\n";  // Corrected abbreviation for consistency
        break;
    case 10:
        cout << "October\n";  // Expanded for clarity
        break;
    case 11:
        cout << "November\n";
        break;
    case 12:
        cout << "December\n";
        break;
    default:
        cout << "Invalid month number, please try again!\n"; // Clearer error message
    }
}
