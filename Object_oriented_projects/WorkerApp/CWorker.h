#pragma once
using namespace std;
#include <iostream>;
#include <iomanip>;
#include <string>;


class CWorker
{
private:
	string m_Name;
	int m_WorkNo;
	double m_HourlyRate;
	int m_HoursWorked;

public:
	//constructor function prototypes

	//standard constructor function
	CWorker(void);
	//non standard constructor function
	CWorker(string name, int workNo);

	//Regular function prototypes
	void SetHourlyRate(double rate);
	void AddHours(int hours);
	double GetWage(void);
	void Display(void);
	void SetHoursWorked(int hours);
	int GetWorkNum(void);
	string GetName(void);
	int GetHoursWorked(void);
	double GetHourlyRate(void);
	bool HasWorkNum(int workNum);
	void IncreaseRate(double percentIncrease);
};

