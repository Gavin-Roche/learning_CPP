// This program checks if the input word is a palindrome by reversing it and comparing
// the reversed word to the original word.

#include <iostream>
using namespace std;

void reverseWords(string& reverseWord, int len);  // Function prototype for reversing the word

int main()
{
    string word, reverseWord;
    int len;

    cout << "Input a word: ";  // Prompt the user to input a word
    cin >> word;  // Read the input word
    cout << endl;

    len = word.length();  // Get the length of the input word
    reverseWord = word;  // Copy the original word to reverseWord

    reverseWords(reverseWord, len);  // Call function to reverse the word

    // Check if the reversed word is the same as the original word (palindrome check)
    if (reverseWord == word)
        cout << word << " is a palindrome" << endl;  // Output if the word is a palindrome
    else
        cout << word << " is not a palindrome" << endl;  // Output if the word is not a palindrome
}

// Function to reverse the word
void reverseWords(string& reverseWord, int len)
{
    char temp;
    // Loop to swap characters from the ends towards the center
    for (int i = 0; i < len / 2; i++)
    {
        temp = reverseWord[i];
        reverseWord[i] = reverseWord[len - i - 1];
        reverseWord[len - i - 1] = temp;
    }
}
