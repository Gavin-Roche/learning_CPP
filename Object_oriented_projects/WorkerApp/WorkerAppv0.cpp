#include "CWorker.h"
#include <iostream>
using namespace std;

int main()
{
    // Create an array of 3 CWorker objects
    CWorker list[3];
    string name;
    int workNo;
    char response;
    double increase;

    // Prompt the user to enter each worker's name and worker number
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter a worker name and worker number: ";
        cin >> name >> workNo;
        // Create a temporary CWorker object with the provided details
        CWorker worker(name, workNo);
        // Store the object in the array
        list[i] = worker;
    }

    // Display the details of each worker in the array
    for (int i = 0; i < 3; i++)
    {
        cout << endl << "The content of object " << i + 1 << endl;
        list[i].Display();
    }

    // Prompt the user to enter the hours worked and hourly rate for each worker
    int hrsWorked;
    double rate;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter hours worked and hourly rate for each worker: ";
        cin >> hrsWorked >> rate;
        // Update the worker's hours worked and hourly rate
        list[i].SetHoursWorked(hrsWorked);
        list[i].SetHourlyRate(rate);
    }

    // Display the updated details of each worker
    for (int i = 0; i < 3; i++)
    {
        cout << endl << "The content of object " << i + 1 << endl;
        list[i].Display();
    }

    // Output the wage due for each worker
    for (int i = 0; i < 3; i++)
    {
        cout << "Wage due for worker " << i + 1 << ": " << list[i].GetWage() << endl;
    }

    // Prompt the user to enter a worker number to display the matching worker's details
    cout << "Worker Detail: " << endl;
    cout << "Enter worker number: ";
    cin >> workNo;

    // Search the array for the worker with the matching number
    for (int i = 0; i < 3; i++)
    {
        if (list[i].HasWorkNum(workNo))
        {
            // If a match is found, output the worker's details
            cout << "Worker Name: " << list[i].GetName() << endl;
            cout << "Worker Number: " << list[i].GetWorkNum() << endl;
            cout << "Hourly Rate: " << list[i].GetHourlyRate() << endl;
            cout << "Hours Worked: " << list[i].GetHoursWorked() << endl;
        }
    }

    // Ask if the user wants to offer a pay increase for a particular worker
    cout << "Worker Detail: " << endl;
    cout << "Enter worker number: ";
    cin >> workNo;

    // Search for the worker with the matching worker number
    for (int i = 0; i < 3; i++)
    {
        if (list[i].HasWorkNum(workNo))
        {
            // If found, display the worker's current details
            cout << "Worker Name: " << list[i].GetName() << endl;
            cout << "Worker Number: " << list[i].GetWorkNum() << endl;
            cout << "Hourly Rate: " << list[i].GetHourlyRate() << endl;
            cout << "Hours Worked: " << list[i].GetHoursWorked() << endl;

            // Ask if the user wishes to offer a percentage increase in pay
            cout << "Do you wish to offer the worker a % increase in pay (Y/N): ";
            cin >> response;

            if ((response == 'Y') || (response == 'y'))
            {
                cout << "Enter the % increase: ";
                cin >> increase;
                // Apply the percentage increase to the worker's hourly rate
                list[i].IncreaseRate(increase);
                // Display the new hourly rate for verification
                cout << list[i].GetName() << " new rate of pay is: " << list[i].GetHourlyRate() << endl;
            }
            else
            {
                cout << "Ok, no increase to be applied" << endl;
                cout << list[i].GetName() << " rate of pay is still: " << list[i].GetHourlyRate() << endl;
            }
        }
    }

    return 0;
} // end main
