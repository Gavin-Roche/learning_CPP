// This program prompts the user to enter a series of positive integers, 
// terminated by the value -1. The program returns and displays the largest 
// value entered by the user.

#include <iostream>
using namespace std;

// Function prototype
int LargestInputValue(void);

int main()
{
    // Call the function to get the largest value
    int max = LargestInputValue();
    
    // Display the largest value
    cout << "The largest value is: " << max << endl;

    return 0;
}

// Function definition
// This function repeatedly prompts the user to enter a number. It keeps track of 
// the largest number entered, and stops when the user enters -1. It returns 
// the largest value entered.
int LargestInputValue(void)
{
    int num, max = 0; // Initialize max to 0
    
    // Loop until -1 is entered
    do
    {
        cout << "Input a number: ";
        cin >> num;

        // Check if the entered number is greater than the current max
        if (num > max)
            max = num;

    } while (num != -1);  // Terminate when user enters -1

    return max;  // Return the largest value
}
