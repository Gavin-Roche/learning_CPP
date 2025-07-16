/*
    Find_Max_Score.cpp
    This program reads 10 numbers from a file and determines the largest value.
*/


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int MaxScore(string dataFile);  // Function prototype

int main()
{
    // Calls MaxScore function to find the highest number in "data.dat"
    cout << "The largest number in the file is: " << MaxScore("data.dat") << endl;
}

int MaxScore(string dataFile)
{
    int grid[10], max;
    ifstream infile(dataFile);  // Open the file for reading

    // Read 10 numbers from the file into the array
    for (int i = 0; i < 10; i++)
        infile >> grid[i];

    max = grid[0];  // Assume the first number is the largest

    // Compare each number to find the maximum value
    for (int i = 0; i < 10; i++)
        if (grid[i] > max)
            max = grid[i];

    return max;  // Return the largest number
}
