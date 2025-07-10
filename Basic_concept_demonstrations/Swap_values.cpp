// This program swaps the values of two integers using reference parameters.
// The user inputs two integers, and the function swaps their values. 
// The updated values are then displayed.

#include <iostream>
using namespace std;

// Function prototype: This function swaps the values of two integers
void swap(int& x, int& y);

int main()
{
    int x, y;

    // Prompt user for two integers
    cout << "The numbers will be inputted in the order x then y: ";
    cin >> x >> y;

    // Call the swap function to exchange the values of x and y
    swap(x, y);

    // Output the swapped values
    cout << "The value of x is now: " << x << " and y is now: " << y << endl;

    return 0;
}

// Function definition: This function swaps the values of the integers x and y
// using reference parameters. The values of the original variables are modified directly.
void swap(int& x, int& y)
{
    int z;  // Temporary variable to hold the value of x during the swap
    
    z = x;   // Store the value of x in z
    x = y;   // Assign the value of y to x
    y = z;   // Assign the value of z (original x) to y
}
