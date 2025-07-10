// Asks the user to enter the departure time and arrival time for a train journey.
// The times should be entered as per a 24-hour clock, for example quarter to seven in the evening is 1845.
// Assuming that the journey is within the same 24-hour period, the program calculates and display the duration of the journey in hours and minutes. 

#include <iostream>
using namespace std;
int main()
{
    //variable_declaration
    int departure_time, arrival_time , hours , minutes , minutes_for_calculation;

    //user_input
    cout << "Enter departure and arrival time" << endl;
    cin >> departure_time >> arrival_time;

    //calculations
    minutes_for_calculation = (((arrival_time / 100) * 60) + (arrival_time % 100)) - (((departure_time / 100) * 60) + (departure_time % 100));
    hours = minutes_for_calculation / 60;
    minutes = minutes_for_calculation % 60;

    //output to console
    cout << "hours: " << hours << " minutes: " << minutes;
}
