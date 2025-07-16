/*
    Update_Sales_Data.cpp
    This program reads car sales data from "Sales.dat" and allows a user to update it.
    - The sales data is stored in a 5x4 array (5 salespeople, 4 car models).
    - The user can enter new sales data, which updates the existing data.
    - The updated sales data is then written back to "Sales.dat".
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int sales[5][4], salesperson, model, carsSold;

    // Open file for reading
    ifstream infile("Sales.dat");
    if (!infile) // Check if file opened successfully
    {
        cerr << "Error: Could not open Sales.dat for reading!" << endl;
        return 1;
    }

    // Read sales data from file into 2D array
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 4; j++)
            infile >> sales[i][j];

    infile.close(); // Close input file

    do
    {
        cout << "\nProcess Car Sale" << endl;

        // Get salesperson input
        do
        {
            cout << "Enter salesperson number (1-5, or -1 to exit): ";
            cin >> salesperson;
        } while (salesperson != -1 && (salesperson < 1 || salesperson > 5));

        if (salesperson == -1)
            break; // Exit loop if user enters -1

        // Get car model input
        do
        {
            cout << "Enter car model number (1-4, or -1 to exit): ";
            cin >> model;
        } while (model != -1 && (model < 1 || model > 4));

        if (model == -1)
            break; // Exit loop if user enters -1

        // Get number of cars sold
        do
        {
            cout << "Enter number of cars sold (0 or more, or -1 to exit): ";
            cin >> carsSold;
            cout << endl;
        } while (carsSold < -1);

        if (carsSold == -1)
            break; // Exit loop if user enters -1

        // Update sales array
        sales[salesperson - 1][model - 1] += carsSold;

    } while (true); // Loop until user chooses to exit

    // Open file for writing updated sales data
    ofstream outfile("Sales.dat");
    if (!outfile) // Check if file opened successfully
    {
        cerr << "Error: Could not open Sales.dat for writing!" << endl;
        return 1;
    }

    // Write updated sales data to file
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            outfile << sales[i][j] << " ";
        }
        outfile << endl;
    }

    outfile.close(); // Close output file
    cout << "Sales data updated successfully!" << endl;

    return 0;
}
