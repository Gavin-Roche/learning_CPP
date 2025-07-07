// The cost of hiring a car is based on the distance travelled by the car.
// There is a standard charge of €0.20 for each km and an additional surcharge of €10.00 for each 1000 km.
// asks the user to enter the initial and final kilometer readings on the car and display the cost of hire.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  //variable declaration
	int staring_km, finishing_km;

	//gets inputs from user
	cout << "input staring km and finishing km" << endl;
	cin >> staring_km >> finishing_km;

	//outputs data
	cout << "The price is: " << fixed << setprecision(2) << (finishing_km - staring_km) * 0.2 + (finishing_km - staring_km) / 1000 * 10 << endl;
}