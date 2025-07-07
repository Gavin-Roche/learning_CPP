/*
    Car_insurance_eligibility_and_premium_calculator
    This program checks whether a person is eligible for car insurance based on their age 
    and penalty points. If eligible, it calculates the total premium cost.
*/

#include <iostream>
using namespace std;

int main()
{
    int age, points;
    double basicPremium, totalPremium;

    // Prompt the user to input their age, penalty points, and basic premium
    cout << "Input age, penalty points and the basic premium: " << endl;
    cin >> age >> points >> basicPremium;

    // Check if the person is not eligible based on age or penalty points
    if ((age < 21) || (points > 6))
        cout << "You are not eligible"; // Output if not eligible

    // If eligible but age < 24 or points >= 4, apply premium increase
    else if ((age < 24) || (points >= 4))
    {
        cout << "You are eligible" << endl;
        totalPremium = basicPremium *= 1.15; // Increase the premium by 15%
        cout << "The total premium cost due is: " << totalPremium; // Output the total premium
    }
    // If no conditions for premium increase, just display the basic premium
    else
    { 
        cout << "You are eligible" << endl;
        cout << "The total premium cost due is: " << basicPremium; // Output the basic premium
    }
}
