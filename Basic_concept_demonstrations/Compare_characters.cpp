// This program compares two characters to determine if the first character
// is alphabetically higher than the second character. The comparison is 
// based on their ASCII values, where lowercase letters are considered higher 
// than uppercase letters. The function returns a boolean value indicating
// whether the first character is higher.

#include <iostream>
using namespace std;

// Function prototype
bool IsAlphaHigher(char first, char second);

int main()
{
    char first, second;
    bool higher;

    // Prompt user for two characters
    cout << "input two characters: ";
    cin >> first >> second;

    // Compare the two characters
    higher = IsAlphaHigher(first, second);
    
    // Output the result
    if (higher)
        cout << first << " is higher than " << second << endl;
    else
        cout << first << " is not higher than " << second << endl;

    return 0;
}

// Function definition
// Compares two characters and returns true if the first character is
// alphabetically higher than the second, false otherwise.
bool IsAlphaHigher(char first, char second)
{
    if (first < second)   // 'first' is lower than 'second' in ASCII order
        return true;
    else
        return false;
}
