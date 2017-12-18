
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Body
{
public:
	void PrintInfo(string color)
	{
		cout << "Body: " << color << endl;
	}
};

class Engine
{
public:
	void PrintInfo(string type)
	{
		cout << "Engine: " << type << endl;
	}
};

class Chassis
{
public:
	void PrintInfo(string type)
	{
		cout << "Chassis: " << type << endl;
	}
};

class Lights
{
public:
	void PrintInfo(string type)
	{
		for (int i = 0; i < 2; i++)
		{
			cout << "Light: " << type << endl;
		}
	}
};

class Wheels
{
public:
	void PrintInfo(string type)
	{
		for (int i = 0; i < 4; i++)
			cout << "Wheel: " << type << endl;
	}

};

	class Car
{
private:
	Engine engine;
	Wheels wheels;
	Chassis chassis;
	Lights lights;
	Body body;

public:
	void PrintInfo()
	{
		engine.PrintInfo("3.0");
		wheels.PrintInfo("16inches");
		chassis.PrintInfo("Normal");
		lights.PrintInfo("Laser");
		body.PrintInfo("Poisonous green");
	}
};

		int main(void)
		{	
		    Car car;
			car.PrintInfo();
			return 0;
		}
