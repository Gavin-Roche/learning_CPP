#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int num1, num2;
	cout << "Enter 2 integers: ";
	cin >> num1 >> num2;

	cout << num1 << "\t+\t" << num2 << "\t=\t" << num1 + num2 << endl;
	cout << num1 << "\t-\t" << num2 << "\t=\t" << num1 - num2 << endl;
	cout << num1 << "\t*\t" << num2 << "\t=\t" << num1 * num2 << endl;
	cout << num1 << "\t/\t" << num2 << "\t=\t" << num1 / num2 << endl;
	cout << num1 << "\t%\t" << num2 << "\t=\t" << num1 % num2 << endl;
	
}