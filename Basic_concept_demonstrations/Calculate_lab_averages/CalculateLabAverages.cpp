/*
 * This program reads a 7x5 grid of numbers from "data.dat", calculates the average of each column,
 * and outputs the results as the average for each lab, formatted to two decimal places.
 */

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    double average[7];
    int grid[7][5];

    ifstream infile("data.dat");

    for (int row = 0; row < 7; row++)
        for (int col = 0; col < 5; col++)
            infile >> grid[row][col];


    for (int col = 0; col < 5; col++)
    {
        int column = 0;
        for (int row = 0; row < 7; row++)
        {
            column += grid[row][col];
        }
        average[col] = double(column) / 7;
    }

    for (int i = 0; i < 5; i++)
        cout << "lab " << i + 1 << " is " << fixed << setprecision(2) << average[i] << endl;
}
