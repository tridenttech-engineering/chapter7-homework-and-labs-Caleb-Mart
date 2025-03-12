//Lab7-4.cpp - displays the average electric bill
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	int month = 1;
	double total = 0.0;
	double average = 0.0;
 double bill = 0.0;
	
while (month < 5) {
	cout << "Enter electric bill for month " << month << ": ";
	cin >> bill;
	total += bill;
	month += 1;
	
}
	
average = total / 4;
cout << fixed << setprecision(2);
cout << "Average electric bill: $" << average << endl;



	return 0;
}	//end of main function