// This program demonstrates basic operations with C-strings in C++.
// It performs the following tasks:
// - Displays a C-string.
// - Takes two names as input and compares them using strcmp.
// - Checks if the names are of the same length, and if not, prints the character differences.
// - Allows the user to make both names the same by copying one name to the other.
// - Concatenates two C-strings and displays the result.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    char greetings[] = "Hello";                     // Initialized C-string
    char name1[21];                                 // Uninitialized C-string
    char name2[21];                                 // Another C-string

    cout << greetings << endl;                      // Display C-string

    cout << "Whats your name: ";
    cin >> name1;                                   // Fill C-string from input

    cout << "Whats your name again: ";
    cin >> name2;                                   // Fill another C-string from input

    if (strcmp(name1, name2) == 0)                  // Compare two C-strings
        cout << greetings << " " << name1 << endl;  // If equal, print greeting

    else
    {
        cout << "I'm confused\n";

        int length1, length2;

        length1 = strlen(name1);                    // Get length of first name
        length2 = strlen(name2);                    // Get length of second name

        if (length1 != length2)                     // If lengths differ, display message
            cout << "Names are of different length\n";

        else
            for (int i = 0; i < length1; i++)       // Check for character differences
                if (name1[i] != name2[i])           
                    cout << "Character " << i + 1 << " is different\n";

        cout << "Make both names the same (Y/N): ";

        char response;
        cin >> response;

        if ((response == 'Y') || (response == 'y'))  // Copy name1 to name2 if response is 'Y' or 'y'
            strcpy_s(name2, name1);                  // Use strcpy_s for secure copying

        cout << "First name is " << name1 << endl;    // Display both names
        cout << "Second name is " << name2 << endl;
    }

    strcat_s(name1, name2);                         // Concatenate name2 to name1
    cout << "Your name is now " << name1 << endl;    // Display the concatenated name
}
