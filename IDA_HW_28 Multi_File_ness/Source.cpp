#include <iostream>
#include <string>
#include <windows.h>

#include "Products.h"

// Service functions prototypes ------------------------------------
int Get_Int_Positive();		// String-Analysis вариант проверки ввода INTEGER_POSITIVE		


// Homework 28 ----------------------------------------------------	
//*
Product Rifle
{
	"Mosin-Nagant 1891 rifle",
	20,
	899.0
};
//*/

// MAIN ------- MAIN ------- MAIN ------- MAIN ------- MAIN --------
int main()
{
	setlocale(LC_CTYPE, "Russian");
	std::string Name_of_Work = { "Home Work 28: STORE" };
	std::string Menu_Element_1 = { "print_prod()" };
	std::string Menu_Element_2 = { "full_price()" };
	std::string Menu_Element_3 = { "sell()" };
	//std::string Menu_Element_4 = { "XXX" };

	do {		
		system("cls");
		std::cout << "\n\t***\t" << Name_of_Work << "\t***\n\n\t\n\nChoose an option: \n";
		std::cout << "\n 1. " << Menu_Element_1;
		std::cout << "\n 2. " << Menu_Element_2;
		std::cout << "\n 3. " << Menu_Element_3;
		//std::cout << "\n 4. " << Menu_Element_4;
		std::cout << "\n\n 0. Exit\n";
		int choice = 0;
		std::cout << "\nYour choice: ";
		choice = Get_Int_Positive();		
		std::cout << "\n";
		// Обработка выбора пользователя
		if (choice == 0) { std::cout << "\nGood By"; for (int j = 0; j < 50; j++) { Sleep(50 - j); std::cout << "y"; } std::cout << "e!"; Sleep(850);  return 0; }
		else if (choice == 1) print_prod(Rifle);
		else if (choice == 2) std::cout<< "Full price of all " << Rifle.Name<< " is " << full_price(Rifle);
		else if (choice == 3) 
		{
			std::cout << "\nHow much items do you want to sell: ";
			sell(Rifle, Get_Int_Positive());
		}
		else { std::cout << "\nSuch choice does not exist yet\n"; Sleep(1000); }
		std::cout << "\n\n";
		system("pause");
		} while (true);
		
	//system("pause");
	return 0;
}

// Service functions -----------------------------------------
int Get_Int_Positive()
{
	std::string a;
	std::cin.sync();
	std::cin.clear();
	getline(std::cin, a);
	if (a != "") 
	{

		if ((a.find_first_not_of("0123456789") == -1))
		{
			try{
				return stoi(a);
			}
			catch (std::out_of_range){
				std::cout << "Input Error: overflow. Positive [INTEGER] expected.\n";
			}
		}
		else
		{
			std::cout << "Input Error: Positive [INTEGER] expected.\n";
			return Get_Int_Positive();
		}		
	}
	else
		std::cout << "Input Error: NULL input. Positive [INTEGER] expected.\n";
	return Get_Int_Positive();
}
