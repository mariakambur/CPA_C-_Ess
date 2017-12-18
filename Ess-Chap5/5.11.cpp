#include <iostream>
#include <string>
using namespace std;
const double sheepneed = 0.11, horseneed = 0.068, cowneed = 0.086;//water in L per 1 kg
class FarmAnimal {
public:
	FarmAnimal(double water_consumption, double weight);
	double getWaterConsumption();
	double getWeight();
private:
	double water_consumption;
	double weight;
};
FarmAnimal::FarmAnimal(double water_consumption, double weight)
{
	this->water_consumption = water_consumption;
	this->weight = weight;
}

double FarmAnimal::getWaterConsumption() 
{
	return water_consumption;
}

double FarmAnimal::getWeight()
{
	return weight;
}

class Sheep : public FarmAnimal
{
public:
	Sheep(double weight) : FarmAnimal(sheepneed, weight) { }
};

class Horse : public FarmAnimal
{
public:
	Horse(double weight) : FarmAnimal(horseneed, weight) { }
};

class Cow : public FarmAnimal
{
public:
	Cow(double weight) : FarmAnimal(cowneed, weight) { }
};

class ConsumptionAccumulator
{
public:  ConsumptionAccumulator();
	double getTotalConsumption();
	void addConsumption(FarmAnimal animal);
private:
	double total_consumption;
};
ConsumptionAccumulator::ConsumptionAccumulator() : total_consumption(0) { }
double ConsumptionAccumulator::getTotalConsumption()
{
	return total_consumption;
}
void ConsumptionAccumulator::addConsumption(FarmAnimal animal) 
{ 
	total_consumption += animal.getWaterConsumption() * animal.getWeight();
}
int main() {
	ConsumptionAccumulator accumulator;
	string line;
	cout << "Input the animal " << endl;
	getline(cin, line);
	cout << "Input the weight " << endl;
	int weight;
	cin >> weight;
		
		if (line.find("sheep") != string::npos)
		{
			Sheep sh(weight);
			accumulator.addConsumption(sh);
		}
		if (line.find("horse") != string::npos)
		{
			Horse h(weight);
			accumulator.addConsumption(h);
		}
		if (line.find("cow") != string::npos)
		{
			Horse h(weight);
			accumulator.addConsumption(h);
		}
	cout << "Your animal(s) need the " << accumulator.getTotalConsumption() << " liters of water" << endl;
	return 0;
}