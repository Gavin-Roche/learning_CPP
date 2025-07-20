#include "CWorker.h"

// Default constructor: Initializes a worker with empty name and zero values for all numeric fields.
CWorker::CWorker(void)
{
    m_Name = "";         // Set name to an empty string
    m_WorkNo = 0;        // Set worker number to 0
    m_HourlyRate = 0;    // Set hourly rate to 0.0
    m_HoursWorked = 0;   // Set hours worked to 0
}

// Parameterized constructor: Initializes a worker with the provided name and worker number,
// while setting hourly rate and hours worked to zero.
CWorker::CWorker(string name, int workNo)
{
    m_Name = name;       // Set name to the provided value
    m_WorkNo = workNo;   // Set worker number to the provided value
    m_HourlyRate = 0;    // Initialize hourly rate to 0.0
    m_HoursWorked = 0;   // Initialize hours worked to 0
}

// Sets the worker's hourly rate to the provided rate.
void CWorker::SetHourlyRate(double rate)
{
    m_HourlyRate = rate;
}

// Adds the specified number of hours to the worker's total hours worked.
void CWorker::AddHours(int hours)
{
    m_HoursWorked += hours;
}

// Calculates and returns the wage due for the worker by multiplying the hourly rate by the hours worked.
double CWorker::GetWage(void)
{
    double wage;
    wage = m_HourlyRate * m_HoursWorked; // Compute wage as hourly rate * hours worked
    return wage;
}

// Displays the details of the worker, including name, worker number, hourly rate, and hours worked.
void CWorker::Display(void)
{
    cout << "Worker Name: " << m_Name << endl;
    cout << "Worker Number: " << m_WorkNo << endl;
    cout << "Hourly Rate: " << m_HourlyRate << endl;
    cout << "Hours Worked: " << m_HoursWorked << endl;
}

// Sets the worker's hours worked to the provided value.
void CWorker::SetHoursWorked(int hours)
{
    m_HoursWorked = hours;
}

// Returns the worker's number.
int CWorker::GetWorkNum(void)
{
    return m_WorkNo;
}

// Returns the worker's name.
string CWorker::GetName(void)
{
    return m_Name;
}

// Returns the total hours worked by the worker.
int CWorker::GetHoursWorked(void)
{
    return m_HoursWorked;
}

// Returns the worker's hourly rate.
double CWorker::GetHourlyRate(void)
{
    return m_HourlyRate;
}

// Checks whether the provided worker number matches the worker's number.
// Returns true if they match, otherwise returns false.
bool CWorker::HasWorkNum(int workNum)
{
    if (m_WorkNo == workNum)
        return true;
    return false;
}

// Increases the worker's hourly rate by the specified percentage.
// For example, if the current rate is 10.0 and percentIncrease is 10, the new rate will be 11.0.
void CWorker::IncreaseRate(double percentIncrease)
{
    m_HourlyRate += m_HourlyRate * (percentIncrease / 100);
}
