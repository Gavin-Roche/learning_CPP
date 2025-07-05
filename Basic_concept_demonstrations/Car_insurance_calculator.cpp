/*
    Car_Insurance_Calculator.cpp
    This program calculates the insurance cost based on:
    - Age (with an age factor)
    - Penalty points (with a penalty factor)
    - Car value (with a value factor)
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int age, points;
    double ageFactor, pointsFactor, cost, carValue, valueFactor = 10;

    // Get user age
    cout << "Please enter your age: ";
    cin >> age;

    if (age < 18)
    {
        cout << "\nYou're too young for insurance.\n";
        return 0;
    }
    else if (age <= 20)
        ageFactor = 2;
    else if (age <= 25)
        ageFactor = 1.5;
    else
        ageFactor = 1;

    // Get penalty points
    cout << "\nPlease enter how many penalty points you have: ";
    cin >> points;

    if (points >= 9)
    {
        cout << "\nToo many penalty points - insurance is not available.\n";
        return 0;
    }
    
    // Assign penalty points factor
    switch (points)
    {
        case 0: case 1: case 2: case 3: case 4:
            pointsFactor = 1;
            break;
        case 5:
            pointsFactor = 1.1;
            break;
        case 6:
            pointsFactor = 1.2;
            break;
        case 7:
            pointsFactor = 1.4;
            break;
        case 8:
            pointsFactor = 1.7;
            break;
        default:
            pointsFactor = 1; // Default case (should not happen)
    }

    // Get car value
    cout << "\nPlease input the value of the car: ";
    cin >> carValue;

    if (carValue <= 0)
    {
        cout << "Invalid car value.\n";
        return 0;
    }

    // Calculate insurance cost
    cost = (250 + (carValue / 1000) * valueFactor) * ageFactor * pointsFactor;

    // Display result
    cout << "\nYour insurance will cost " << fixed << setprecision(2) << cost << " euros.\n";

    return 0;
}
