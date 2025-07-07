// This program demonstrates the use of functions in C++. It includes two functions:
// - `Display()` which outputs "hello world" to the screen.
// - `Addition()` which adds two integers passed as parameters and returns the result.
// In the `main()` function, it calls both functions: Display and Addition. It displays the sum of 10 and 20.

#include <iostream>
using namespace std;

//function prototypes

void Display(void);

int Addition(int x, int y);

int main()
{
    int a, b;
    int answer;
    Display(); // Calls the Display function
    answer = Addition(10, 20); // Calls the Addition function with 10 and 20 as arguments

    cout << "Result of function call is: " << answer << endl; // Outputs the result of the addition

}

void Display (void)
{
    cout << "hello world" << endl; // Prints "hello world"
}

int Addition(int x, int y)
{
    int result;
    result = x + y; // Adds x and y
    return result; // Returns the sum
}
