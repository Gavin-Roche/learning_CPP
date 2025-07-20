// A wholesale supplier of CDs charges 0.50 per CD but gives a % discount based on number of CDs as follows : 
// more than 1000	 discount 10 %
// more than 5000	 discount 20 %
// more than 10000	 discount 30 %

#include <iostream>
#include < iomanip>
using namespace std;
int main()
{
    // variable initialisation
    double price_of_cd, discount;
    int num_of_cds;
    price_of_cd = 0.5;

    // gets data input
    cout << "Enter the number of CDs bought:" << endl;
    cin >> num_of_cds;

    // tests to see what discount is necessary
    if (num_of_cds > 10000)
        discount = 0.3;
    else if (num_of_cds > 5000)
        discount = 0.2;
    else if (num_of_cds > 1000)
        discount = 0.1;
    else
        discount = 0;

    // outputs answer
    cout << "The CDs will cost: " << setprecision(2) << fixed << (num_of_cds * price_of_cd) * (1-discount);
}