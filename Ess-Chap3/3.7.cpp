#include <iostream>
using namespace std;
struct Date {
int year;
int month;
int day;
};
bool isLeap(int year) {
 return year%4==0;
}
int monthLength(int year, int month) {
   int vector[12]{ 31,28,31,30,31,30,31,31,30,31,30,31 }; //maybe wrong O_o
	
	if (isLeap(year)==true)
	
	{vector[1] = 29;}
	
	return vector[month - 1];
}
int dayOfYear(Date date) {
int numberOfDays = 0;
for (int i=1;i<date.month;i++)
{

        numberOfDays+=monthLength(date.year,i);

}
return     numberOfDays+=date.day;

}
int main(void) {
Date d;
cout << "Input date in format year month day: "<<endl;

cin >> d.year >> d.month >> d.day;
cout << dayOfYear(d) << endl;

return 0;
}
