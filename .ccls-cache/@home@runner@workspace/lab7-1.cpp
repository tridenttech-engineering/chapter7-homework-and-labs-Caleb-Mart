//Lab7-1.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
 int day = 0;
int total = 0;
int daily = 0;
double average = 0.0;

for (day = 1; day <= 7; day += 1) {
cout << "how many texts sent on day " << day << ": ";
cin >> daily;
total += daily;

}
average = static_cast<double>(total) / 7;
cout << fixed << setprecision(0);

cout << "Average messages sent: " << average << endl;



    
    return 0;
}   //end of main function