#include <iostream>
using namespace std;
class FarmAnimal
{
	public:
		FarmAnimal() { water_consumption = 1; };
		FarmAnimal(double water_consumption);
		double getWaterConsumption();
	protected:
		double water_consumption;
};
FarmAnimal::FarmAnimal(double water_consumption) 
{ 
	this->water_consumption = water_consumption;
	cout << "The body of FarmAnimal constructor is working now with fact parameter " << water_consumption << endl;
}
double FarmAnimal::getWaterConsumption() { return water_consumption; }

class DummyAnimal : public FarmAnimal 
{ 
	public:  
		DummyAnimal(double water_consumption);
};
DummyAnimal::DummyAnimal(double water_consumption) 
{ 
	this->water_consumption = water_consumption;
	cout << "The body of DummyAnimal constructor is working now; the value of water_consuption is " << water_consumption << endl;
}
class DoublingAnimal : public FarmAnimal
{
	public:
		DoublingAnimal(double given_water_consumption);
};

DoublingAnimal::DoublingAnimal(double given_water_consumption) : FarmAnimal(2 * given_water_consumption) { cout << "The body of DoublingAnimal constructor is working now; the value of water_consuption is " << getWaterConsumption() << endl; }
void printConsumption(FarmAnimal animal)
{
	cout << "Doubling or dummy animal consumes " << animal.getWaterConsumption() << " liters of water" << endl;
}
int main() {
	FarmAnimal animal(5);
	DummyAnimal dummyanimal(10);
	DoublingAnimal doublinganimal(5);
	cout << "FarmAnimal consume " << animal.getWaterConsumption() << " liters of water." << endl;
	cout << "Dummy and doubling animal consume?" << endl;
	printConsumption(dummyanimal);
	printConsumption(doublinganimal);
	return 0;
}