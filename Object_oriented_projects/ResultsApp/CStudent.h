#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

class CStudent
{
private:
	string m_Name;
	int	m_Assessment;
	int	m_Exam;
public:
	CStudent(void);
	CStudent(string name);
	CStudent(string name, int assessment, int exam);
	void SetAssessment(int mark);
	void SetExam(int mark);
	string GetName(void);
	int GetAssessment(void);
	int GetExam(void);
	bool HasName(string name);
	bool IsAPass(void);
	string GetGrade(void);
	int GetTotalMark(void);
};

