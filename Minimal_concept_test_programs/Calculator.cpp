#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //initialising variables
    double num1, num2 , answer;
    char sign;

    cout << "Enter the sum in the format (35 % 6)" << endl;
    cin >> num1 >> sign >> num2;

    switch(sign)
    {
    case '+':
        answer = num1 + num2;
        break;
    
    case '-':
        answer = num1 - num2;
        break;

    case '*':
        answer = num1 * num2;
        break;

    case '/':
        answer = num1 / num2;
        break;

    case '%':
        answer = int(num1) % int(num2);
        break;

    default:
        cout << sign << "is not an operator" << endl;
        return 0; //kills the program
    }

    cout << setw(10) << num1 << setw(3) << sign << setw(3) << num2<< setw(3) << '=' << setw(3) << answer << endl;

}


