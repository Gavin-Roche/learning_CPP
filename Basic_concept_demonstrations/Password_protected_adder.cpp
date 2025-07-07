// This program requests a password from the user and gives three attempts to enter it correctly.
// Once the correct password is entered, the program allows the user to input two numbers and adds them together.
// If the password is incorrect, it notifies the user and gives them another chance.

#include <iostream>

using namespace std;

void add_two_numbers();  // Function prototype to add two numbers

int main()
{
    string password = "this", attempt;  // Correct password and variable to hold user input

    // Allow the user three attempts to enter the correct password
    for (int i = 0; i < 3; i++)
    {
        cout << "Input password: ";
        cin >> attempt;  // Take input for password

        if (password == attempt)  // If password is correct
        {
            add_two_numbers();  // Call function to add two numbers
            i = 3;  // Exit the loop by setting i to 3
        }
        else  // If password is incorrect
        {
            cout << "That is wrong" << endl;
        }
    }
}

// Function to add two numbers
void add_two_numbers()
{
    int num1, num2;  // Declare variables for numbers
    cout << "Input num 1 and 2: ";
    cin >> num1 >> num2;  // Take input for two numbers

    cout << num1 << " + " << num2 << " = " << num1 + num2;  // Output the sum
}
