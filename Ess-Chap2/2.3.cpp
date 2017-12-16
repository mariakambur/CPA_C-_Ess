#include <iostream>
using namespace std;
int main(void) { 
 int yearno,  monthno,  dayno, result;
 cout << "Input # of year";
 cin >> yearno;
  cout << "Input # of month";
 cin >> monthno;
  cout << "Input # of day";
 cin >> dayno;
 monthno += 2;
 if (monthno < 0)
 {
     monthno += 12;
     yearno-= 1;
     }
 result =  monthno*83/32 ; // 3. take month number and multiply it by 83 and divide it by 32;
   result = monthno+dayno; //4. add day number to month;
     result = yearno + monthno;//5. add year number to month;
   result = yearno/4 +monthno; //6. add year/4 to month;
   result = monthno - yearno/100; //7. subtract year/100 from month;
    result = yearno/400 + monthno;//8. add year/400 to month;
    result = monthno%7;//9. find the remainder of dividing month by 7;
cout << result;
return 0;
}
