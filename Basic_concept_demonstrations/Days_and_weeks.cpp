#include <iostream>
using namespace std;
int main()
{
    //variable declarations
    int days_input , days_output , weeks_output;

    //prompt the use to enter the number of days
    cout << "Enter the total number of days";
    cin >> days_input;

    //calculate the number of weeks and days
    weeks_output = days_input / 7;
    days_output = days_input % 7;

    //outputs data to consul
    cout << "the number of weeks is: " << weeks_output << endl << "the number of days is: " << days_output << endl;

}