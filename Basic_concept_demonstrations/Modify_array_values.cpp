/*
    Array_manipulation_program
    This program prompts the user to enter 10 integer values, 
    adds 100 to each value, then multiplies it by 2. 
    Finally, it outputs the modified array values.
*/

#include <iostream>
using namespace std;

int main()
{
    int score[10]; // Declare an array to store 10 integer values

    // Input 10 numbers from the user and store them in the array
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter a number: ";
        cin >> score[i];
    }

    cout << endl;

    // Add 100 to each element and multiply it by 2
    for (int i = 0; i < 10; i++)
        (score[i] += 100) *= 2; // Modify each element in the array

    // Output the modified array values
    for (int i = 0; i < 10; i++)
        cout << "index " << i << " is " << score[i] << endl;
}
