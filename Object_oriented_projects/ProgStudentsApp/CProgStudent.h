#pragma once
using namespace std;
#include <iostream> 
#include <string> 
#include <iomanip>
class CProgStudent
{
private:
	string m_Name;
	string m_KNum;
	int m_ChristmasMark;
	int m_LLAttendanceMark;
	int m_Proj1Mark;
	int m_Proj2Mark;
	int m_MayMark;
public:
	//constructor function prototype
	CProgStudent(void);
	CProgStudent(string name, string kNumber);

	//regular function prototypes
	void SetMayExamMark(int mark);
	void SetChristmasMark(int mark);
	void SetProj1Mark(int mark);
	void SetProj2Mark(int mark);
	void SetLLAttendanceMark(int mark);
	string GetName(void);
	void ShowDetails(void);
	int GetTotalMark(void);
	bool HasKNum(string KNumber);
	bool IsAFail(void);
	string GetKnum(void);
	int GetLLAttendanceMark(void);
	int GetProj1Mark(void);
	int GetProj2Mark(void);
	int GetMayMark(void);
	int GetChristmasMark();
};

