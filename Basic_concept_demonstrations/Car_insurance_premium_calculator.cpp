/*
    Program to determine eligibility for car insurance.
    - A person is not eligible if under 21 or has more than 4 penalty points.
    - If eligible, a 25% loading applies if the person is under 25 or has more than 2 penalty points.
    - The program calculates and displays the adjusted premium if applicable.
*/

#include <iostream>
using namespace std;

int main()
{
    int age, points;
    double premium;

    // Prompt user for input
    cout << "Enter your number of penalty points, age, and premium: ";
    cin >> points >> age >> premium;

    // Check insurance eligibility
    if (age < 21 || points > 4)
        cout << "You are not eligible for insurance.";
    else if (age < 25 || points > 2)  // Apply 25% loading if conditions met
    {
        premium *= 1.25;
        cout << "You are eligible. The premium is: " << premium;
    }
    else  // Eligible with no extra charge
        cout << "You are eligible. The premium is: " << premium;
}
