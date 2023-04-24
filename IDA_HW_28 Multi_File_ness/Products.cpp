#include "Products.h"
#include <iostream>	

void print_prod(Product Product_object)
{
	std::cout << "\n" << "Name:     " << Product_object.Name;
	std::cout << "\n" << "Quantity: " << Product_object.Number;
	std::cout << "\n" << "Price:    " << Product_object.price;
}

double full_price(Product Product_object)
{	
	return (Product_object.Number* Product_object.price);
}

void sell(Product& Product_object, int sell_quantity)
{
	Product_object.Number = Product_object.Number - sell_quantity;
}
