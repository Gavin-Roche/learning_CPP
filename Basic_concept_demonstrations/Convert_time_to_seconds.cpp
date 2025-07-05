// This program converts a given time in hours, minutes, and seconds to the total number of seconds.
// The user inputs the time, and the function calculates and returns the total time in seconds.

#include <iostream>
using namespace std;

// Function prototype: This function takes hours, minutes, and seconds as parameters 
// and returns the equivalent time in seconds.
int TimeInSeconds(int hours, int minutes, int seconds);

int main()
{
    int hours, minutes, seconds;

    // Prompt user to input hours, minutes, and seconds
    cout << "Enter hours, minutes, and then seconds: ";
    cin >> hours >> minutes >> seconds;

    // Call the TimeInSeconds function and output the result
    cout << "The total seconds is: " << TimeInSeconds(hours, minutes, seconds) << endl;

    return 0;
}

// Function definition: This function converts the given time to total seconds.
// It calculates the total seconds by adding the seconds, minutes converted to seconds, and hours converted to seconds.
int TimeInSeconds(int hours, int minutes, int seconds)
{
    return seconds + minutes * 60 + hours * 3600;
}
