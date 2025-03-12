//Lab7-3.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
int day = 1;
int total = 0;
int daily = 0;
double average = 0.0;

while (day <= 7) {
cout << "how many texts sent on day " << day << ": ";
cin >> daily;
total += daily;
day += 1;
}
average = static_cast<double>(total) / 7;
cout << fixed << setprecision(0);

cout << "Average messages sent: " << average << endl;


    return 0;
}   //end of main function