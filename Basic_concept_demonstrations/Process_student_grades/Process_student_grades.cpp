/*
    Process_Student_Grades.cpp
    This program reads student IDs (K-numbers) and their marks from "marks.dat".
    - It assigns grades based on predefined score ranges.
    - It displays the results and writes the grades to "Grades.dat".
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string kNumbers[20]; // Array to store student IDs
    int marks[20];       // Array to store student marks

    ifstream infile("marks.dat");

    // Check if the file opened successfully
    if (!infile)
    {
        cerr << "Error: Could not open marks.dat!" << endl;
        return 1; // Exit program if file not found
    }

    // Read K-numbers (student IDs) from file
    for (int i = 0; i < 20; i++)
        infile >> kNumbers[i];

    // Read marks from file
    for (int i = 0; i < 20; i++)
        infile >> marks[i];

    infile.close(); // Close input file after reading

    char grades[20]; // Array to store assigned grades

    // Assign grades based on marks
    for (int i = 0; i < 20; i++)
    {
        if (marks[i] >= 85)
            grades[i] = 'A';
        else if (marks[i] >= 70)
            grades[i] = 'B';
        else if (marks[i] >= 60)
            grades[i] = 'C';
        else if (marks[i] >= 50)
            grades[i] = 'D';
        else if (marks[i] >= 40)
            grades[i] = 'E';
        else
            grades[i] = 'F';
    }

    // Display student IDs, marks, and grades
    cout << "K-Number   Marks   Grade" << endl;
    cout << "------------------------" << endl;
    
    for (int i = 0; i < 20; i++)
        cout << kNumbers[i] << "   " << marks[i] << "   " << grades[i] << endl;

    // Open file to save grades
    ofstream outfile("Grades.dat");

    if (!outfile)
    {
        cerr << "Error: Could not create Grades.dat!" << endl;
        return 1;
    }

    // Write student IDs to file
    for (int i = 0; i < 20; i++)
        outfile << kNumbers[i] << " ";
    
    outfile << endl;

    // Write grades to file
    for (int i = 0; i < 20; i++)
        outfile << grades[i] << " ";

    outfile.close(); // Close output file

    cout << "Grades successfully written to Grades.dat." << endl;

    return 0;
}
