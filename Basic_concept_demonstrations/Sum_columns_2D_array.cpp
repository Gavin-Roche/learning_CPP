/*
    Program: Sum of Columns in a 2D Array
    Description: This program initializes a 3x4 matrix and calculates the sum of 
    each column. The sums are then displayed in a formatted table.
*/

#include <iostream>
using namespace std;

// Function prototype to calculate the sum of each column
void SumOfCols(int matrix[][4], int rows);

int main()
{
    // Declare and initialize a 3x4 matrix
    int M[3][4] = {2, 5, 4, 7, 
                   3, 1, 2, 9, 
                   4, 6, 3, 0};

    // Call function to compute column sums
    SumOfCols(M, 3);
}

// Function to calculate and display the sum of each column
void SumOfCols(int matrix[][4], int rows)
{
    cout << "Column\t\tSum of Column" << endl << "Entries" << endl;

    for (int col = 0; col < 4; col++)
    {
        cout << col + 1 << "\t\t"; // Display column number
        int columnAdded = 0; // Initialize column sum

        // Sum up all values in the current column
        for (int row = 0; row < rows; row++)
            columnAdded += matrix[row][col];

        cout << columnAdded << endl; // Display column sum
    }
}
