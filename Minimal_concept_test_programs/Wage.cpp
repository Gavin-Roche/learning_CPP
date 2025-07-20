// will accept an input an hourly rate of pay and number of hours worked.
// It will then calculate and display the total pay given that all hours over 40 attract one and a half times the hourly rate.

#include <iostream>
using namespace std;

int main()
{
    //variable declaration
    int hours_worked;
    double hourly_rate, wage;
    
    //prompt the user to input the data
    cout << "Enter hourly rate and hrs worked in the week";
    cin >> hourly_rate >> hours_worked;

    //checks if we have over time
    if (hours_worked > 40)//overtime
        {
            //wage = basic pay + overtime
            wage = 40 * hourly_rate + (hours_worked - 40) * hourly_rate * 1.5;
        }
    else
        {
            wage = hours_worked * hourly_rate;
        }

    cout << "your wage is: " << wage << endl;
}