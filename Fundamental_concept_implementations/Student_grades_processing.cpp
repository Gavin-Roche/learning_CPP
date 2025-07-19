// This program handles a list of student grades. It allows the user to input 5 grades, 
// determines the lowest grade, and then increases each grade by one (except for 'A').
// Finally, it prints the original grades, the lowest grade, and the revised grades.

#include <iostream> 
using namespace std;

void FillList(char grades[], int size);          // Function prototype to fill the grades array
char GetLowestGrade(char grades[], int size);    // Function prototype to get the lowest grade
void UpGradesByOne(char grades[], int size);     // Function prototype to increase grades by one

int main()
{
    char grades[5];  // Array to store 5 student grades

    // Fill the grades array with user input
    FillList(grades, 5);

    // Print the original grades
    for (int i = 0; i < 5; i++)
        cout << grades[i] << endl;

    // Get the lowest grade and print it
    char lowest = GetLowestGrade(grades, 5);
    cout << endl << lowest << " is the lowest grade\n";

    // Increase grades by one and print the revised grades
    UpGradesByOne(grades, 5);
    cout << "\nRevised grades are :" << endl;
    for (int i = 0; i < 5; i++)
        cout << grades[i] << endl;

    return 0;
}

// Function to fill the grades array with user input
void FillList(char grades[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "input a grade: ";
        cin >> grades[i];
    }
}

// Function to find the lowest grade in the array
char GetLowestGrade(char grades[], int size)
{
    char grade = grades[0];  // Initialize to the first grade in the array

    // Compare all grades to find the lowest
    for (int i = 0; i < size; i++)
        if (grades[i] < grade)
            grade = grades[i];
    
    return grade;  // Return the lowest grade
}

// Function to increase all grades by one (except 'A')
void UpGradesByOne(char grades[], int size)
{
    for (int i = 0; i < size; i++)
        if (grades[i] != 'A')
            grades[i] -= 1;  // Decrease ASCII value to increase grade
}
