/*
    Multiples_of_3_and_8_finder
    Program to print numbers between 1 and 100 that are divisible by both 3 and 8.
*/

#include <iostream>
using namespace std;

int main()
{
    // Loop through numbers 1 to 100
    for (int i = 1; i <= 100; i++)
    {
        // Check if the number is divisible by both 3 and 8
        if (i % 3 == 0 && i % 8 == 0)
            cout << i << endl;
    }
}
