//accepts an input integer and will then display a message indicating whether the integer entered was an even or odd value

#include <iostream>
using namespace std;

int main()
{
    int user_input;

    cout << "Enter a number: ";
    cin >> user_input;

    if (user_input % 2 == 0)
        cout << user_input << " Is a even number" << endl;
    else
        cout << user_input << " Is a odd number" << endl;
}