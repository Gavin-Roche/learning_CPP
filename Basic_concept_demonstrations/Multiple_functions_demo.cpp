// This program demonstrates multiple functions in C++ and their use in a simple task.
// It includes the following functions:
// - DisplayStarPattern: Displays a star pattern on the screen.
// - GetData: Accepts two integers as input by reference.
// - DisplayResult: Displays the calculated result of the sum of two integers.
// - CalculateResult: Adds two integers and returns the result.
// - DisplayHello: Prints "Hello" to the screen in a formatted manner.

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void DisplayStarPattern(void);
void GetData(int& a, int& b);
void DisplayResult(int z);
int CalculateResult(int x, int y);
void DisplayHello(void);

int main()
{
    int x, y, z;

    DisplayStarPattern();  // Display a star pattern

    DisplayHello();        // Display "Hello"

    GetData(x, y);         // Get two integer inputs from the user

    z = CalculateResult(x, y);  // Calculate the sum of x and y

    DisplayResult(z);  // Display the result
}

// Function to display a star pattern
void DisplayStarPattern(void)
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 31; j++) cout << "*" << " ";
        cout << endl;
    }

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 10; j++) cout << "  ";
        for (int j = 0; j < 11; j++) cout << "*" << " ";
        cout << endl;
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 11 + i; j++) cout << "  ";
        for (int j = 0; j < 9 - 2 * i; j++) cout << "*" << " ";
        cout << endl;
    }
}

// Function to get two integer values from the user
void GetData(int& a, int& b)
{
    cout << "Enter two numbers : ";
    cin >> a >> b;
}

// Function to display the result
void DisplayResult(int z)
{
    cout << "***************************************************************************" << endl;
    cout << "Answer is " << z << endl;
}

// Function to calculate the sum of two integers
int CalculateResult(int x, int y)
{
    return x + y;
}

// Function to display "Hello" in a formatted way
void DisplayHello(void)
{
    cout << setw(32) << "Hello" << "\n\n\n\n";
}
