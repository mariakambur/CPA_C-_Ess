#include <iostream>
#include <string>

using namespace std;

class ShopItemOrder
{
private:
	string name;
	double unitprice;
	int qty;
	double totalprice;
	bool ischange;
public:
	ShopItemOrder(string name, double unitprice, int qty);
	void setName(string name);
	void setUnitPrice(double unitprice);
	void setQty(int qty);
	string getName();
	double getUnitPrice();
	int getQty();
	double getPrice();
	void printOrder();
};
ShopItemOrder::ShopItemOrder(string name, double unitprice, int qty)
{
	this->name = name;
	this->qty = qty;
	this->unitprice = unitprice;
	this->totalprice = unitprice*qty;
}
void ShopItemOrder::setQty(int qty) 
{
	if (qty<0)
		return;
	ShopItemOrder::qty = qty;
	ShopItemOrder::ischange = true;
}
void ShopItemOrder::setUnitPrice(double unit_price)
{
	if (unitprice<0)
		return;
	ShopItemOrder::unitprice = unit_price;
	ShopItemOrder::ischange = true;
}
string ShopItemOrder::getName() 
{
	return ShopItemOrder::name;
}
double ShopItemOrder::getUnitPrice()
{
	return ShopItemOrder::unitprice;
}
int ShopItemOrder::getQty()
{
	return ShopItemOrder::qty;
}
double ShopItemOrder::getPrice()
{
	if (ShopItemOrder::ischange)
	{
		ShopItemOrder::ischange = false;
		ShopItemOrder::totalprice = ShopItemOrder::qty*ShopItemOrder::unitprice;
	}
	return ShopItemOrder::totalprice;
}
void ShopItemOrder::setName(string name)
{
	if (name != "")
		ShopItemOrder::name = name;
}

void ShopItemOrder::printOrder()
{
	cout << "Order: " << this->name << " quantity = " << this->qty << " price for one item = " << this->unitprice << " total price = " << this->getPrice();
}
int main()
{

	ShopItemOrder s("Apple", 5, 7);
	s.printOrder();
	return 0;
}