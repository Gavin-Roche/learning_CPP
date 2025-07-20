/*
    Formatting_output_program
    This program demonstrates how to format the output of a floating-point number.
    It sets the fill character, specifies the field width, 
    and fixes the precision for the displayed result.
*/

#include <iostream>
#include <iomanip> // For output formatting
using namespace std;

int main()
{
    // Display a number with specific formatting
    cout << "Result:" << setfill('a') << setw(10) << fixed << setprecision(3) << 123.45832;
    // setfill('a') - fills any unused space with the character 'a'
    // setw(10) - sets the total width of the output to 10 characters
    // fixed - forces the output to be displayed in fixed-point notation
    // setprecision(3) - limits the output to 3 decimal places
}
