// This program stores 10 scores input by the user into an array. It then prints each 
// score along with its index.

#include <iostream>
using namespace std;

int main()
{
    int scores[10];  // Array to store 10 test scores

    // Loop to take input for 10 test scores
    for (int i = 0; i < 10; i++)
    {
        cout << endl << "Enter score number " << i << ": ";  // Prompt user for input
        cin >> scores[i];  // Store the entered score in the array
    }

    // Loop to print each score with its corresponding index
    for (int i = 0; i < 10; i++)
        cout << endl << "Score number " << i << " is " << scores[i] << endl;  // Output the score

    return 0;
}
