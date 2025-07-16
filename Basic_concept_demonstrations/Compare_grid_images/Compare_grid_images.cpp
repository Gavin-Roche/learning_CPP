/*
    Compare_Grid_Images.cpp
    This program compares two 10x10 grids from "Picture1.dat" and "Picture2.dat".
    - It calculates how many pixels (grid elements) are identical.
    - If at least 95% of pixels match, it considers the images the same.
*/

#include <iostream>
#include <fstream>

using namespace std;

void populateArray(int grid1[10][10], int grid2[10][10], string file1, string file2)
{
    ifstream infile1(file1);
    ifstream infile2(file2);

    // Check if both files opened successfully
    if (!infile1 || !infile2)
    {
        cerr << "Error: Could not open one or both input files!" << endl;
        exit(1);
    }

    // Read data from both files into respective grids
    for (int row = 0; row < 10; row++)
        for (int col = 0; col < 10; col++)
        {
            infile1 >> grid1[row][col];
            infile2 >> grid2[row][col];
        }

    infile1.close();
    infile2.close();
}

// Function to display a 10x10 grid
void Display(int grid[10][10])
{
    for (int row = 0; row < 10; row++)
    {
        for (int col = 0; col < 10; col++)
            cout << grid[row][col] << " ";
        cout << endl;
    }
    cout << endl;
}

int main()
{
    int grid1[10][10], grid2[10][10];
    int same = 0;
    const int totalPixels = 100;

    // Populate the grids with data from files
    populateArray(grid1, grid2, "Picture1.dat", "Picture2.dat");

    // Compare grids to count matching pixels
    for (int row = 0; row < 10; row++)
        for (int col = 0; col < 10; col++)
            if (grid1[row][col] == grid2[row][col])
                same++;

    // Calculate and display similarity percentage
    double similarityPercentage = (same / static_cast<double>(totalPixels)) * 100;
    
    if (similarityPercentage >= 95)
        cout << "The images are the same (" << similarityPercentage << "% of pixels match)." << endl;
    else
        cout << "The images are different (" << similarityPercentage << "% of pixels match)." << endl;

    return 0;
}
