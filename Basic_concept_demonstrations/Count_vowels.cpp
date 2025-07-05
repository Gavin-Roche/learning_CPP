/*
    Count_Vowels.cpp
    This program takes a string input from the user and counts the number of vowels (A, E, I, O, U).
*/

#include <iostream>
#include <string>
using namespace std;

int numVowels(string input); // Function prototype

int main()
{
    string input;
    cout << "Please input a line: ";
    getline(cin, input); // Read an entire line

    // Display the number of vowels in the input
    cout << "\nThe line \"" << input << "\" has " << numVowels(input) << " vowels." << endl;

}

// Function to count vowels in a given string
int numVowels(string input)
{
    int numVowels = 0;

    for (char c : input)  // Loop through each character in the string
    {
        // Check if the character is a vowel (both uppercase and lowercase)
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            numVowels++;
        }
    }

    return numVowels;
}
