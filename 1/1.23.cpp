// 1.23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item book, current_book;
	int count = 1;
	std::cout << "Please enter some sales records:" << std::endl;
	if(std::cin >> book)
	{
		while(std::cin >> current_book)
		{
			if (compareIsbn(book, current_book))
				count++;
			else
			{
				std::cout << book.isbn() << " has total " << count << " sales record." << std::endl;
				book = current_book;
				count = 1;
			}
		}
		std::cout << book.isbn() << " has total " << count << " sales record." << std::endl;
	}
	else
	{
		std::cout << "No records" << std::endl;
		return -1;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
