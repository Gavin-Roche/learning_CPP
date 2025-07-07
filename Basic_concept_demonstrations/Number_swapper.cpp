/*
    Program to accept two integers and display them in descending order.
    If the second number is smaller than the first, their values are swapped.
*/

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, temp;

    // Prompt user to input two numbers
    cout << "Input 2 numbers: " << endl;
    cin >> num1 >> num2;

    // Swap values if the second number is smaller than the first
    if (num2 < num1)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Display numbers in ascending order
    cout << endl << num1 << endl << num2 << endl;
}
