/*
    Calculate_Net_Pay.cpp
    This program calculates an employee's net pay after deducting taxes.
*/

#include <iostream>
using namespace std;

double NetPay(double grossPay, double taxFreeAllowance, double rateOfTax); // Function prototype

int main()
{
    double grossPay, taxFreeAllowance, rateOfTax;

    // Get user input
    cout << "Enter gross pay: ";
    cin >> grossPay;
    
    cout << "Enter tax-free allowance: ";
    cin >> taxFreeAllowance;
    
    cout << "Enter tax rate (as a decimal, e.g., 0.20 for 20%): ";
    cin >> rateOfTax;

    // Display the net pay result
    cout << "Net pay after tax: " << NetPay(grossPay, taxFreeAllowance, rateOfTax) << endl;

    return 0;
}

// Function to calculate net pay after tax deduction
double NetPay(double grossPay, double taxFreeAllowance, double rateOfTax)
{
    double taxableIncome = grossPay - taxFreeAllowance; // Only the income above allowance is taxed
    double tax = (taxableIncome > 0) ? taxableIncome * rateOfTax : 0; // Apply tax only if taxable income is positive

    return grossPay - tax; // Net pay after tax deduction
}
