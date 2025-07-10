/*
    Search_Array.cpp
    This program allows the user to enter 10 integers into an array 
    and checks if a specified value exists within the array.
*/

#include <iostream>
using namespace std;

bool HasValue(int array[], int size, int searchValue); // Function prototype

int main()
{
    int size = 10, searchValue;
    int array[10];

    // Loop to take 10 integer inputs from the user
    for (int i = 0; i < size; i++) // Fixed condition: i < size
    {
        cout << "Input integer " << i + 1 << ": ";
        cin >> array[i];
    }
        
    // Get the search value from the user
    cout << "Enter a search value: ";
    cin >> searchValue;

    // Check if the value exists in the array
    if (HasValue(array, size, searchValue))
        cout << searchValue << " is in the array." << endl; // Fixed missing space
    else
        cout << searchValue << " is not in the array." << endl; // Fixed incorrect message

    return 0;
}

// Function to search for a value in the array
bool HasValue(int array[], int size, int searchValue)
{
    for (int i = 0; i < size; i++)
        if (array[i] == searchValue)
            return true; // Value found

    return false; // Value not found
}
