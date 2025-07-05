#include <iostream>
using namespace std;

// Function to compute the nth Fibonacci number using recursion
int Fibonacci(int n)
{
    // Base cases:
    if (n <= 0)
        return 0;  // The first Fibonacci number is defined as 0
    if (n == 1)
        return 1;  // The second Fibonacci number is defined as 1

    // Recursive case:
    // Each Fibonacci number is the sum of the two preceding numbers:
    // F(n) = F(n-1) + F(n-2)
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main()
{
    int n;

    // Prompt the user for input
    cout << "Enter the position (n) for Fibonacci sequence: ";
    cin >> n;

    // Validate input (optional)
    if (n < 0)
    {
        cout << "Please enter a non-negative number." << endl;
        return 1;  // Exit the program with an error code
    }

    // Call the recursive function and print the result
    cout << "Fibonacci number at position " << n << " is: " << Fibonacci(n) << endl;
}
