#include "CStudent.h"

// Default constructor
// Initializes the student with an empty name and zero marks.
CStudent::CStudent(void)
	: m_Name("")         // Set name to empty string
	, m_Assessment(0)    // Set assessment mark to 0
	, m_Exam(0)          // Set exam mark to 0
{
}

// Constructor with name parameter
// Initializes the student with a given name and zero marks.
CStudent::CStudent(string name)
	: m_Name(name)       // Set name to the provided string
	, m_Assessment(0)    // Set assessment mark to 0
	, m_Exam(0)          // Set exam mark to 0
{
}

// Constructor with name, assessment, and exam parameters
// Initializes the student with provided values.
CStudent::CStudent(string name, int assessment, int exam)
	: m_Name(name)        // Set name to the provided string
	, m_Assessment(assessment)  // Set assessment mark to the provided value
	, m_Exam(exam)        // Set exam mark to the provided value
{
}

// Sets the assessment mark for the student.
void CStudent::SetAssessment(int mark)
{
	m_Assessment = mark;
}

// Sets the exam mark for the student.
void CStudent::SetExam(int mark)
{
	m_Exam = mark;
}

// Returns the name of the student.
string CStudent::GetName(void)
{
	return m_Name;
}

// Returns the assessment mark of the student.
int CStudent::GetAssessment(void)
{
	return m_Assessment;
}

// Returns the exam mark of the student.
int CStudent::GetExam(void)
{
	return m_Exam;
}

// Checks if the student's name matches the given name.
// Returns true if they match, false otherwise.
bool CStudent::HasName(string name)
{
	return (m_Name == name);
	// Alternatively:
	// if (m_Name == name)
	//     return true;
	// else
	//     return false;
}

// Determines if the student has passed based on individual and total marks.
// A student passes if both the assessment and exam marks are at least 15, 
// and the sum of the marks is at least 40.
bool CStudent::IsAPass()
{
	if (m_Assessment >= 15 && m_Exam >= 15 && m_Assessment + m_Exam >= 40)
		return true;
	else
		return false;
}

// Returns the grade of the student as a string based on total marks.
// The grading scheme is as follows:
//   - If total mark is 70 or above: "H1"
//   - If total mark is between 60 and 69: "H2.1"
//   - If total mark is between 50 and 59: "H2.2"
//   - If total mark is between 40 and 49: "Pass"
//   - Otherwise, the student has failed, so "Fail" is returned.
string CStudent::GetGrade()
{
	if (IsAPass())
	{
		if (m_Assessment + m_Exam >= 70)
			return "H1";
		else if (m_Assessment + m_Exam >= 60)
			return "H2.1";
		else if (m_Assessment + m_Exam >= 50)
			return "H2.2";
		else
			return "Pass";
	}
	return "Fail";
}

// Returns the total mark for the student by adding assessment and exam marks.
int CStudent::GetTotalMark(void)
{
	return m_Assessment + m_Exam;
}
