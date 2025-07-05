/*
    Program to calculate and apply a 10% discount on items costing over €100.
    The user enters the price of an item, and the program outputs the final amount to pay.
*/

#include <iostream>

using namespace std;

int main()
{
    // Variable to store the price of the item
    double price_of_item;

    // Prompt user for input
    cout << "Enter the price of the item: ";
    cin >> price_of_item;

    // Apply discount if item costs €100 or more
    if (price_of_item >= 100)
        cout << "Pay: " << price_of_item - price_of_item * 0.1;
    else
        cout << "Pay: " << price_of_item;
}
