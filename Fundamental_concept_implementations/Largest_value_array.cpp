/*
    Program: Finding the Largest Value in an Array
    Description: This program prompts the user to enter four integers into an 
    array. It then determines and displays the largest value using a function.
*/

#include <iostream>
using namespace std;

// Function prototypes
void FillList(int list[], int size); // Function to populate the array
int GetLargest(int list[], int size); // Function to find the largest value

int main()
{
    int marks[4]; // Declare an array of size 4
    
    FillList(marks, 4); // Populate the array with user input
    
    int largest = GetLargest(marks, 4); // Find the largest value
    
    cout << largest << " was the largest value\n"; // Output result
}

// Function to populate an array with user input
void FillList(int list[], int size)
{
    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; i++)
        cin >> list[i]; // Store user input into the array
}

// Function to find the largest value in the array
int GetLargest(int list[], int size)
{
    int temp = list[0]; // Assume the first element is the largest

    for (int i = 0; i < size; i++) // Iterate through the array
    {
        if (list[i] > temp) // If a larger value is found, update temp
            temp = list[i];
    }

    return temp; // Return the largest value
}
