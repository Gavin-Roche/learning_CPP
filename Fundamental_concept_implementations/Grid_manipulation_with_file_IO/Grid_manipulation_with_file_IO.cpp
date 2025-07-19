// GridManipulation.cpp
// This program reads a 3x3 grid of integers from a file, displays it,
// finds the smallest value in the grid, subtracts this smallest value from
// all elements of the grid, and then writes the modified grid back to the file.
// The grid is displayed before and after the modification.

#include <iostream>
#include <fstream>  // For file handling

using namespace std;

// Function to display the 3x3 grid
void display(int grid[3][3]);

int main()
{
    int grid[3][3], smallest;  // Declare a 3x3 grid and a variable for the smallest value

    // Open the input file for reading data into the grid
    ifstream infile("Grid_data.dat");

    // Read the 3x3 grid data from the file
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            infile >> grid[row][col];  // Read the grid values from the file
        }
    }

    // Display the original grid
    display(grid);

    // Initialize the smallest value to the first element of the grid
    smallest = grid[0][0];

    // Find the smallest value in the grid
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            if (grid[row][col] < smallest) {
                smallest = grid[row][col];  // Update the smallest value if a smaller one is found
            }
        }
    }

    // Output the smallest value found in the grid
    cout << endl << "Smallest = " << smallest << endl << endl;

    // Subtract the smallest value from each element in the grid
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            grid[row][col] -= smallest;  // Adjust the grid elements
        }
    }

    // Display the modified grid
    display(grid);

    // Close the input file after reading data
    infile.close();

    // Open the output file for writing the modified grid
    ofstream outfile("Grid_data.dat");

    // Write the modified grid back to the file
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            outfile << grid[row][col] << " ";  // Write each grid element
        }
        outfile << endl;  // Move to the next row
    }

    // Close the output file after writing data
    outfile.close();

    // Pause the system to keep the window open until the user presses a key
    system("pause");
}

// Function to display the contents of the grid
void display(int grid[3][3]) {
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            cout << grid[row][col] << " ";  // Print each element of the grid
        }
        cout << endl;  // Move to the next line after each row
    }
}