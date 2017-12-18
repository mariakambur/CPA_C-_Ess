#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;
class Point2D
{
    public:
        Point2D(double x, double y);
        string toString();
        double distance(Point2D point1);
    private:  
        double x;
        double y;
};
double Point2D::distance(Point2D point1)
{
    return sqrt(pow((x - point1.x), 2) + pow((y - point1.y), 2));
}

Point2D::Point2D(double x, double y)
{
    this -> x = x;
    this -> y = y;
}

int main()
{
    double x1, y1, x2, y2;
    cout << "Provide 1 point's coordinates: ";
    cin >> x1 >> y1;
    cout << "Provide 2-st point's coordinates: ";
    cin >> x2 >> y2;
    Point2D point1(x1, y1), point2(x2, y2);
    cout << "The first pair of coordinates is: (" << x1 << "; "<< y1<< ")" << endl;
    cout << "The second  pair of coordinates is: (" << x2   << "; "<<  y2<< ")" << endl;
    cout << "Distance " << point2.distance(point1);
    return 0;
}