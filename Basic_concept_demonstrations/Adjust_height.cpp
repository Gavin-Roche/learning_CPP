/*
    Adjust_height.cpp
    This program demonstrates the AdjustHeight function.
    The function is designed to adjust the height of an object.
    Currently, it simply adds 10 to the provided height, regardless of the size code.
*/

#include <iostream>
using namespace std;

// Function prototype: Adjusts the height based on the given size code.
void AdjustHeight(double& height, char size);

int main()
{
    double height;
    char size;

    // Prompt the user to enter the height and a size code (e.g., S, M, L)
    cout << "Enter height and size code (e.g., 50 M): ";
    cin >> height >> size;
    cout << "Original height is " << height << endl;

    // Adjust the height using the AdjustHeight function.
    AdjustHeight(height, size);

    // Display the new height.
    cout << "New height is " << height << endl;

    return 0;
}

// Function definition: Adjusts the height by adding 10.
// Note: The size parameter is not used in this implementation.
void AdjustHeight(double& height, char size)
{
    height = height + 10;
}
