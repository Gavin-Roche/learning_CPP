/*
    Program to calculate and display net pay for salaried and waged employees.
    - Salaried employees are paid monthly based on an annual salary.
    - Waged employees are paid weekly based on hours worked, with overtime at 1.5x the hourly rate.
    - Both types of employees have a tax-free allowance and are taxed at 41% on the taxable portion.
*/

#include <iostream>
using namespace std;

int main()
{
    // Constants and variables for salary calculation
    const double TAXRATE = 0.41;
    double annualSalary, mthlySalary;
    double taxFreeAllowance, taxDue, netPay, hrlyRate, weeklyWage;
    int hrsWorked;
    char employeeType;

    // Prompt user to enter employee type
    cout << "Enter employee type, S for salaried or W for waged: ";
    cin >> employeeType;

    if (employeeType == 'S')  // Salaried employee
    {
        cout << "Please enter the annual salary: ";
        cin >> annualSalary;

        cout << "Please enter the annual tax-free allowance: ";
        cin >> taxFreeAllowance;

        // Monthly salary calculation
        mthlySalary = annualSalary / 12;

        // Tax calculation (tax applied only to taxable income)
        taxDue = (mthlySalary - taxFreeAllowance / 12) * TAXRATE;
        netPay = mthlySalary - taxDue;

        cout << "Your net pay is: " << netPay << endl;
    }
    else if (employeeType == 'W')  // Waged employee
    {
        cout << "Enter the number of hours worked: ";
        cin >> hrsWorked;

        cout << "Enter the hourly rate of pay: ";
        cin >> hrlyRate;

        // Calculate weekly wage (including overtime pay if applicable)
        if (hrsWorked > 40)
            weeklyWage = 40 * hrlyRate + (hrsWorked - 40) * hrlyRate * 1.5;  // Fixed overtime logic
        else
            weeklyWage = hrsWorked * hrlyRate;

        cout << "Please enter the annual tax-free allowance: ";
        cin >> taxFreeAllowance;

        // Tax calculation (weekly)
        taxDue = (weeklyWage - taxFreeAllowance / 52) * TAXRATE;
        netPay = weeklyWage - taxDue;

        cout << "Your net pay is: " << netPay << endl;
    }
    else
        cout << "Invalid employee type, please try again!\n";
}
