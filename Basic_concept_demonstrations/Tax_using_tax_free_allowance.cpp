// Asks an employee to enter his annual salary, his annual tax free allowance and his percentage tax rate.
// Then calculate and display the tax due for the year.

#include <iostream>
using namespace std;
int main()
{
    //variable declaration
    double percentage_tax, tax_free_allowance, net_income, gross_income;

    cout << "Enter the tax rate, tax free allowance, and gross income" << endl;
    cin >> percentage_tax >> tax_free_allowance >> gross_income;

    if (gross_income > tax_free_allowance)
        net_income = gross_income - ((gross_income - tax_free_allowance) * (percentage_tax / 100));
    
    else
        net_income = gross_income;

    cout << "Your net income is: " << net_income << endl;
}