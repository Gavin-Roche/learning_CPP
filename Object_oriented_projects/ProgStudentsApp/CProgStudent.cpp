#include "CProgStudent.h"

// Default constructor initializes all member variables to default values
CProgStudent::CProgStudent(void)
{
    m_Name = "";           // Initialize name as an empty string
    m_KNum = "";           // Initialize K-number as an empty string
    m_ChristmasMark = 0;   // Set all marks to 0 initially
    m_LLAttendanceMark = 0;
    m_Proj1Mark = 0;
    m_Proj2Mark = 0;
    m_MayMark = 0;
}

// Parameterized constructor initializes name and K-number, sets marks to 0
CProgStudent::CProgStudent(string name, string kNumber)
{
    m_Name = name;         // Assign provided name
    m_KNum = kNumber;      // Assign provided K-number
    m_ChristmasMark = 0;   // Initialize all marks to 0
    m_LLAttendanceMark = 0;
    m_Proj1Mark = 0;
    m_Proj2Mark = 0;
    m_MayMark = 0;
}

// Setters for different assessment marks
void CProgStudent::SetMayExamMark(int mark)
{
    m_MayMark = mark;
}

void CProgStudent::SetChristmasMark(int mark)
{
    m_ChristmasMark = mark;
}

void CProgStudent::SetProj1Mark(int mark)
{
    m_Proj1Mark = mark;
}

void CProgStudent::SetProj2Mark(int mark)
{
    m_Proj2Mark = mark;
}

void CProgStudent::SetLLAttendanceMark(int mark)
{
    m_LLAttendanceMark = mark;
}

// Getter for student name
string CProgStudent::GetName(void)
{
    return m_Name;
}

// Display all details of the student
void CProgStudent::ShowDetails(void)
{
    cout << "Name: " << m_Name << endl;
    cout << "K Number: " << m_KNum << endl;
    cout << "Christmas Mark: " << m_ChristmasMark << endl;
    cout << "LL Attendance Mark: " << m_LLAttendanceMark << endl;
    cout << "Project 1 Mark: " << m_Proj1Mark << endl;
    cout << "Project 2 Mark: " << m_Proj2Mark << endl;
    cout << "May Exam Mark: " << m_MayMark << endl << endl;
}

// Calculate and return the total marks
int CProgStudent::GetTotalMark(void)
{
    return m_ChristmasMark + m_LLAttendanceMark + m_Proj1Mark + m_Proj2Mark + m_MayMark;
}

// Check if the student's K-number matches the given K-number
bool CProgStudent::HasKNum(string KNumber)
{
    return m_KNum == KNumber;
}

// Determine if the student has failed (Total mark < 40 means fail)
bool CProgStudent::IsAFail(void)
{
    return GetTotalMark() < 40;
}

// Get student K-number
string CProgStudent::GetKnum(void)
{
    return m_KNum;
}

// Getters for individual assessment marks
int CProgStudent::GetLLAttendanceMark(void)
{
    return m_LLAttendanceMark;
}

int CProgStudent::GetProj1Mark(void)
{
    return m_Proj1Mark;
}

int CProgStudent::GetProj2Mark(void)
{
    return m_Proj2Mark;
}

int CProgStudent::GetMayMark(void)
{
    return m_MayMark;
}

int CProgStudent::GetChristmasMark(void)
{
    return m_ChristmasMark;
}
