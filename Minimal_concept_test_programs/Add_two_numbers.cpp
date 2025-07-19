/*
    Addition_program
    This program prompts the user to enter two integer numbers, 
    adds them together, and displays the result.
*/

#include <iostream>
using namespace std; // Allows use of standard library functions without prefixing 'std::'

int main()
{
    // Declare variables to store user input and result
    int num1, num2, result;

    // Prompt user to enter two integer numbers
    cout << "Enter 2 integer numbers: ";
    cin >> num1 >> num2;

    // Perform addition
    result = num1 + num2;

    // Display the result of addition
    cout << "Result of addition is: " << result;
}
