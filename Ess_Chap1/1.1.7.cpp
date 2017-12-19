#include <sstream>//just for beauty output
#include <iomanip>//just for beauty output
#include <math.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
  float a, b, c, d, e;
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> d;
  cin >> e;
  cout<< "-------------------" << endl;
  cout  <<a << endl;
  printf("%.2f", b);
   cout << endl;
  cout  << c << endl;
  cout << setprecision(3) <<d << endl;
  cout << setprecision(1) <<e << endl;
}