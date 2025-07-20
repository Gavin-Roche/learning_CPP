/*
    This program manages student records using the CStudent class.
    It loads student data from "StudentInfo.dat", provides a user menu to:
      - Add students
      - Enter marks for students (either CA or Exam)
      - Display a list of students who passed
      - Display the student(s) with the highest total mark.
    The updated student data is saved back to "StudentInfo.dat" when the program ends.
*/

#include "CStudent.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Global array to hold up to 40 students and a count of the current number
CStudent list[40];
int numStudents = 0;

// Function prototypes for user menu options
int ShowMenu(void);
void DoInitializeGroup(void);
void DoEnterElementMarks(void);
void DoDisplayPassList(void);
void DoDisplayBestStudent(void);

int main()
{
    // Open the student database file for reading
    ifstream infile("StudentInfo.dat");
    if (!infile)
    {
        cout << "Database file StudentInfo.dat does not exist\n";
        cout << "You should use Add Students to add 4 students to the list \n\n";
    }
    else
    {
        // Read student data from file
        string name;
        int caMark, feMark;
        infile >> numStudents;
        for (int i = 0; i < numStudents; i++)
        {
            infile >> name >> caMark >> feMark;
            CStudent student(name, caMark, feMark);
            list[i] = student;
        }
        infile.close();
    }

    // Display user interface and process menu selections
    int option;
    do
    {
        option = ShowMenu();
        switch (option)
        {
        case 0:
            DoInitializeGroup();
            break;
        case 1:
            DoEnterElementMarks();
            break;
        case 2:
            DoDisplayPassList();
            break;
        case 3:
            DoDisplayBestStudent();
            break;
        case 4:
            // Quit option
            break;
        default:
            cout << "Invalid option\n";
        }
    } while (option != 4);

    // Save the updated student list to the database file
    if (numStudents == 0)
        return 0;

    ofstream outfile("StudentInfo.dat");
    outfile << numStudents << endl;
    for (int i = 0; i < numStudents; i++)
        outfile << list[i].GetName() << "  " << list[i].GetAssessment() << "  " << list[i].GetExam() << endl;
    outfile.close();

    return 0;
}

// Displays the menu options and returns the user's selection
int ShowMenu(void)
{
    int option;
    cout << "\t0.        Add Students\n";
    cout << "\t1.        Enter Element Marks\n";
    cout << "\t2.        Display Pass Names List\n";
    cout << "\t3.        Display Best Student\n";
    cout << "\t4.        Quit\n";
    cout << "\t\t\tOption ? ";
    cin >> option;
    return option;
}

// Initializes the group of students by entering the name of each student.
// A new CStudent object is created and added to the global list.
void DoInitializeGroup(void)
{
    char response;
    string name;
    do
    {
        cout << "Enter student name: ";
        cin >> name;
        CStudent student(name);
        list[numStudents] = student;
        numStudents++;
        cout << "Enter more students (Y/N)? ";
        cin >> response;
    } while (response == 'Y' || response == 'y');
}

// Allows the user to enter marks for either the CA or Exam for each student.
void DoEnterElementMarks(void)
{
    int element, mark;
    cout << "Enter 1 for CA, enter 2 for Exam mark entry: ";
    cin >> element;
    for (int i = 0; i < numStudents; i++)
    {
        cout << "Enter a mark for " << list[i].GetName() << ": ";
        cin >> mark;
        switch (element)
        {
        case 1:  // Enter CA mark for each student
            list[i].SetAssessment(mark);
            break;
        case 2:  // Enter Exam mark for each student
            list[i].SetExam(mark);
            break;
        default:
            cout << "Invalid element option.\n";
            break;
        }
    }
}

// Displays the names and grades of all students who have passed the exam.
void DoDisplayPassList(void)
{
    for (int i = 0; i < numStudents; i++)
    {
        if (list[i].IsAPass())
            cout << list[i].GetName() << " " << list[i].GetGrade() << endl;
    }
}

// Finds and displays the student(s) with the highest total mark.
void DoDisplayBestStudent(void)
{
    int topMark = 0;
    // Determine the highest total mark among all students
    for (int i = 0; i < numStudents; i++)
    {
        if (list[i].GetTotalMark() > topMark)
            topMark = list[i].GetTotalMark();
    }
    // Display the student(s) who achieved the highest mark
    for (int i = 0; i < numStudents; i++)
    {
        if (list[i].GetTotalMark() == topMark)
            cout << "\nStudent(s) with highest mark: " << list[i].GetName() << " " << topMark << endl << endl;
    }
}
