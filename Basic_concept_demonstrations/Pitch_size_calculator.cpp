// Asks the user to enter the length and width of a football pitch in metres , each to two decimal places.
// The program then calculate and display the area of the pitch in square metres (m2) to two decimal places.

#include <iostream>
#include <iomanip>

using namespace std; //formats chars to a standard format
int main()
{
    double length, width, area, perimeter;
    //prompts the user to input length width
    cout << "Enter length and width:" << endl;
    cin >> width >> length;
    //calculates the area
    area = length * width;
    //calculates the perimeter
    perimeter = length * 2 + width * 2;
    cout << "The area of the pitch is: " << fixed << setprecision(2) << area << endl;
    cout << "The perimeter of the pitch is: " << fixed << setprecision(2) << perimeter << endl;
}