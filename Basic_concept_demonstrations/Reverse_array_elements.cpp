/*
    Reverse_array_elements
    This program initializes an array with values from 0 to 11, 
    then reverses the order of the elements and prints the updated array.
*/

#include <iostream>
using namespace std;

int main()
{
    const int LISTLENGTH = 12; // Define the size of the array
    int item1, item2; // Temporary variables for swapping
    int arr[LISTLENGTH]; // Declare an array of size 12

    // Initialize the array with values from 0 to 11
    for (int i = 0; i < LISTLENGTH; i++)
        arr[i] = i;

    // Reverse the array using a swapping technique
    for (int i = 0; i < LISTLENGTH / 2; i++)
    {
        item1 = arr[i]; // Store the left-side value
        item2 = arr[LISTLENGTH - i - 1]; // Store the right-side value
        
        arr[i] = item2; // Swap right-side value to left position
        arr[LISTLENGTH - i - 1] = item1; // Swap left-side value to right position
    }

    // Output the reversed array
    for (int i = 0; i < LISTLENGTH; i++)
        cout << arr[i] << "\t";
}
