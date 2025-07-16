#include <iostream>
using namespace std;

// Function prototype: Doubles x and y if they don't exceed 100 after doubling
bool ZoomBy2(int& x, int& y);

int main()
{
    int x, y;

    // Prompt user for input
    cout << "Input both coordinates: ";
    cin >> x >> y;
    cout << endl;

    // Check if the coordinates can be doubled
    if (ZoomBy2(x, y))
        cout << "New coordinates are: " << x << ", " << y << endl;
    else
        cout << "Coordinates are still: " << x << ", " << y << endl;
}

// Function to double the values of x and y if possible
bool ZoomBy2(int& x, int& y)
{
    bool haveBeenDoubled = false;

    // Ensure doubling does not exceed the limit of 100
    if (x * 2 <= 100 && y * 2 <= 100)
    {
        haveBeenDoubled = true;  // Indicate that doubling was successful
        x *= 2;  // Double x
        y *= 2;  // Double y
    }

    return haveBeenDoubled; // Return true if values were doubled, false otherwise
}
