/*
    Program to calculate the percentage of students achieving first-class results.
    The user enters student results until -1 is entered. Results of 70 or above are
    considered first-class. The program then outputs the percentage of first-class results.
*/

#include <iostream>
using namespace std;

int main()
{
    int students_first_class = 0, students = 0;
    double result, percentage_first_class;

    // Read student results until -1 is entered
    do
    {
        cout << "input student result: ";
        cin >> result;

        if (result != -1)
        {
            // Count first-class results (result >= 70)
            if (result >= 70)
                students_first_class++;

            // Count total student results
            students++;
        }

    } while (result != -1);

    // Calculate the percentage of first-class results
    if (students > 0)
        percentage_first_class = (double)students_first_class / students;
    else
        percentage_first_class = 0;

    cout << "percentage of student first class: " << percentage_first_class * 100 << "%";
}
