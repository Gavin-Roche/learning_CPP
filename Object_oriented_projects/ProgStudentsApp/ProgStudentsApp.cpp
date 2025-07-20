#include <iostream>
#include "CProgStudent.h"

using namespace std;

int main()
{
    // Array to store details of 3 students
    CProgStudent list[3];
    string name, kNumber;
    int mark;

    // Collect student names and K-numbers
    for (int i = 0; i < 3; i++)
    {
        cout << "Please input the student name and K-number: ";
        cin >> name >> kNumber;

        // Create a student object and store it in the list
        CProgStudent student(name, kNumber);
        list[i] = student;
    }

    // Display student details
    cout << "\n\n\n";
    cout << "\tStudent Details\n";
    for (int i = 0; i < 3; i++)
    {
        list[i].ShowDetails();
    }

    // Allocate Christmas marks for each student
    cout << "Enter Christmas mark for each student: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter Christmas mark for " << list[i].GetName() << " : ";
        cin >> mark;
        list[i].SetChristmasMark(mark);
    }
    cout << endl;

    // Allocate LL Attendance marks
    cout << "Enter LL Attendance mark for each student: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter LL Attendance mark for " << list[i].GetName() << " : ";
        cin >> mark;
        list[i].SetLLAttendanceMark(mark);
    }
    cout << endl;

    // Allocate Project 1 marks
    cout << "Enter Project 1 mark for each student: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter Project 1 mark for " << list[i].GetName() << " : ";
        cin >> mark;
        list[i].SetProj1Mark(mark);
    }
    cout << endl;

    // Allocate Project 2 marks
    cout << "Enter Project 2 mark for each student: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter Project 2 mark for " << list[i].GetName() << " : ";
        cin >> mark;
        list[i].SetProj2Mark(mark);
    }
    cout << endl;

    // Allocate May Exam marks
    cout << "Enter May Exam mark for each student: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter May Exam mark for " << list[i].GetName() << " : ";
        cin >> mark;
        list[i].SetMayExamMark(mark);
    }
    cout << endl;

    // Display updated student details
    cout << "\n\n\n";
    cout << "\tStudent Details\n";
    for (int i = 0; i < 3; i++)
    {
        list[i].ShowDetails();
    }

    // Calculate and display total marks for each student
    cout << "Student Total Marks:" << endl << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << list[i].GetName() << " " << list[i].GetTotalMark() << endl;
    }

    // Search for student by K-number and check pass/fail status
    cout << "\n\n\n";
    cout << "\tStudent Details\n";
    cout << "Enter a student K-number: ";
    cin >> kNumber;

    for (int i = 0; i < 3; i++)
    {
        if (list[i].HasKNum(kNumber))
        {
            if (list[i].IsAFail())
                cout << "Student " << list[i].GetName() << " has failed. Total mark = " << list[i].GetTotalMark() << endl;
            else
                cout << "Student " << list[i].GetName() << " has passed. Total mark = " << list[i].GetTotalMark() << endl;
        }
    }

    // Display the pass list
    cout << "\n\n\n";
    cout << "Pass List of Students:\n";
    for (int i = 0; i < 3; i++)
    {
        if (!list[i].IsAFail()) // If the student has passed
            cout << "Student Name = " << list[i].GetName()
            << " Student K-number = " << list[i].GetKnum()
            << " Pass Mark = " << list[i].GetTotalMark() << endl;
    }

    // Check subcomponent marks for a particular student
    cout << "\n\n\n";
    cout << "Check Subcomponent Marks for a Particular Student\n";
    cout << "Enter a student K-number: ";
    cin >> kNumber;

    for (int i = 0; i < 3; i++)
    {
        if (list[i].HasKNum(kNumber))
        {
            cout << "\nK-number: " << list[i].GetKnum()
                << "\nChristmas Mark: " << list[i].GetChristmasMark()
                << "\nLL Attendance Mark: " << list[i].GetLLAttendanceMark()
                << "\nProject 1 Mark: " << list[i].GetProj1Mark()
                << "\nProject 2 Mark: " << list[i].GetProj2Mark()
                << "\nMay Exam Mark: " << list[i].GetMayMark() << endl;
        }
    }
}
