#include <iostream>
using namespace std;
class Matrix
{
    public:
    int a, b, c, d;
    Matrix(int a, int b, int c, int d);
    friend ostream& operator<<(ostream& os, const Matrix& m);
};
Matrix::Matrix(int a, int b, int c, int d)
{
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
}
ostream& operator<<(ostream& os,  const Matrix& m)  
{
    cout << m.a << " "<< m.b << endl;
    cout << m.c << " "<< m.d << endl;
    return os;
}

int main(void) {
    int a, b, c, d;
 cout << "Provide 4 values for matrix" << endl;
 cin >> a;
  cin >> b;
   cin >> c;
    cin >> d;
Matrix m(a, b, c, d);
cout << m;
return 0;
}
