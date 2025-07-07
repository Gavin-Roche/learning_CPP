// This program demonstrates the use of 2D character arrays (C-string arrays) in C++.
// It associates each month with a season (Spring, Summer, Autumn, Winter) based on input month number.

#include <iostream>

using namespace std;

int main()
{
    // 2D array to store the names of seasons
    char seasons[4][7] = { "Spring", "Summer", "Autumn", "Winter" };

    int monthNumber;  // Variable to store user input for month number
    cout << "Enter month number : ";
    cin >> monthNumber;  // Get month number from the user

    // Switch statement to determine the season based on the month number
    switch (monthNumber)
    {
    case 2:
    case 3:
    case 4:
        cout << "It is " << seasons[0] << endl;  // Spring
        break;
    case 5:
    case 6:
    case 7:
        cout << "It is " << seasons[1] << endl;  // Summer
        break;
    case 8:
    case 9:
    case 10:
        cout << "It is " << seasons[2] << endl;  // Autumn
        break;
    case 11:
    case 12:
    case 1:
        cout << "It is " << seasons[3] << endl;  // Winter
        break;
    default:
        cout << "No such month number\n";  // Error message for invalid month
    }
}
