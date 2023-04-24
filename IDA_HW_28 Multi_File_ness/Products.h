//#pragma once
#ifndef _Products_
#define _Products_

#include <string>

struct Product
{
	std::string Name;
	int Number = 0;
	double price;
};
/*
Product Rifle
{
	"Mosin-Nagant 1891 rifle",
	20,
	899.0
};
//*/
void print_prod(Product Product_object);
double full_price(Product Product_object);
void sell(Product& Product_object, int sell_quantity);

#endif //_Products_

