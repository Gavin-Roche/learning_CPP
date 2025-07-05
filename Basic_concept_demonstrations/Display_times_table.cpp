// This program displays a multiplication table for a given input value from 1 to 12.
// The user inputs a number, and the program prints the multiplication table for that number.

#include <iostream>
using namespace std;

// Function prototype: This function takes an integer input_value and prints its multiplication table from 1 to 12.
void TimesTable(int input_value);

int main()
{
    int input_value;

    // Prompt the user to input a number for which the multiplication table is to be displayed
    cout << "Input the number for the times table: ";
    cin >> input_value;

    // Call the TimesTable function to display the multiplication table
    TimesTable(input_value);

    return 0;
}

// Function definition: This function prints the multiplication table for the given input_value.
// It loops from 0 to 12 and calculates the product of input_value and the current number.
void TimesTable(int input_value)
{
    for (int i = 0; i <= 12; i++)
        cout << input_value << " x " << i << " = " << input_value * i << endl;
}
