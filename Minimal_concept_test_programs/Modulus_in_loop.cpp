/*
    Loop_testing_program
    This program uses a for loop to print the remainder when each number 
    from 20 to 4 (decremented by 4 each time) is divided by 3.
*/

#include <iostream>
using namespace std;

int main()
{
    // Loop starting from 20 down to 4, decrementing by 4
    for (int x = 20; x >= 4; x -= 4)
    {
        // Output the remainder of x divided by 3
        cout << x % 3 << endl;
    }
}
