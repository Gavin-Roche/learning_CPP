/*
    Normalize_Grid_Data.cpp
    This program reads a 10x10 grid of integers from "Griddata.dat".
    - It finds the smallest value in the grid.
    - It subtracts this smallest value from all elements.
    - It then prints the modified grid.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int grid[10][10], smallest;

    ifstream infile("Griddata.dat");

    // Check if the file opened successfully
    if (!infile)
    {
        cerr << "Error: Could not open Griddata.dat!" << endl;
        return 1; // Exit program if file not found
    }

    // Read grid data from file
    for (int row = 0; row < 10; row++)
        for (int col = 0; col < 10; col++)
            infile >> grid[row][col];

    infile.close(); // Close file after reading

    // Find the smallest value in the grid
    smallest = grid[0][0];
    for (int row = 0; row < 10; row++)
        for (int col = 0; col < 10; col++)
            if (grid[row][col] < smallest)
                smallest = grid[row][col];

    // Subtract the smallest value from each element and display the grid
    cout << "Normalized Grid:" << endl;
    for (int row = 0; row < 10; row++)
    {
        for (int col = 0; col < 10; col++)
        {
            grid[row][col] -= smallest;
            cout << grid[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}
