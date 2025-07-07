/*
    Program: Matrix or Array Input and Display
    Description: This program gives the user a choice to either:
        1. Input and display a 5x8 matrix
        2. Display a pre-defined 2x3 array.
    The matrix or array is displayed after user input or predefined data.
*/

#include <iostream>
using namespace std;

int main()
{
    int one_two;
    cout << "Enter 1 for matrix or 2 for array: ";
    cin >> one_two;

    // Case 1: If the user selects matrix (option 1)
    if (one_two == 1)
    {
        int matrix[5][8];

        // User inputs the values for the 5x8 matrix
        for (int row = 0; row < 5; row++)
        {
            for (int col = 0; col < 8; col++)
            {
                cout << "Enter an integer for row " << row << " column " << col << ": ";
                cin >> matrix[row][col];
            }
        }

        // Display the entered 5x8 matrix
        cout << "\nMatrix: \n";
        for (int row = 0; row < 5; row++)
        {
            for (int col = 0; col < 8; col++)
            {
                cout << matrix[row][col] << " ";
            }
            cout << endl;
        }
    }
    // Case 2: If the user selects array (option 2)
    else
    {
        int array[2][3] = { 0, 0, 0, 0, 1, 2 };

        // Display the pre-defined 2x3 array
        cout << "\nArray: \n";
        for (int row = 0; row < 2; row++)
        {
            for (int col = 0; col < 3; col++)
            {
                cout << array[row][col] << " ";
            }
            cout << endl;
        }
    }
}
