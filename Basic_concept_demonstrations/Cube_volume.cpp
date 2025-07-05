/*
    Program: Cube Volume Calculator
    Description: This program calculates the volume of a cube given the side length.
    The user inputs a value, and the program computes and displays the cube's volume.
*/

#include <iostream>
#include <cmath> // Needed for the pow() function
using namespace std;

// Function prototype
double CubeVolume(double x);

int main()
{
    double input1; // Variable to store user input
    
    // Prompt the user for the cube's side length
    cout << "Input a number for the side length of a cube: ";
    cin >> input1;
    
    // Output the result using the CubeVolume function
    cout << endl << "The volume of a cube with sides of length " << input1 
         << " is " << CubeVolume(input1) << endl;
}

// Function to calculate the volume of a cube
double CubeVolume(double x)
{
    return pow(x, 3); // Returns x raised to the power of 3
}
