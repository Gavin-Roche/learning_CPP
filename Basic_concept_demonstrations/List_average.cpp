/*
    list_average.cpp
    This program calculates the average of an array of integers.
    It prompts the user to input 5 numbers, computes their average,
    and then displays the result.
*/

#include <iostream>
using namespace std;

// Function prototype: Computes the average of an array of integers.
double average(int list[], int size);

int main()
{
    int numbers[5];

    // Prompt the user to enter 5 integers
    cout << "Enter 5 integer numbers: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> numbers[i];
    }

    // Display the calculated average
    cout << endl << "The average of the array is: " << average(numbers, 5) << endl;

    return 0;
}

// Function definition: Computes the average of an array of integers.
double average(int list[], int size)
{
    double total = 0;

    for (int i = 0; i < size; i++)
    {
        total += list[i];
    }

    // Use 'size' instead of a hardcoded value to handle different array sizes
    return total / size;
}
