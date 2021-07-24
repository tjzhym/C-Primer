	// 2.41.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

struct Sales_data{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
int main()
{
	// 1.21
	// start
	/*
	Sales_data data1, data2;
	double price = 0.0;
	std::cout << "Please input first book information: book_number, sold_units and price" << std::endl;
	std::cin >> data1.bookNo >> data1.units_sold >> price;
	data1.revenue = data1.units_sold * price;
	std::cout << "Please input second book information: book_number, sold_units and price" << std::endl;
	std::cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold * price;

	if (data1.bookNo == data2.bookNo)	{
		unsigned totalCnt = data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;
		std::cout << "Total book information: ";
		std::cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " " << std::endl;
		std::cout << "price per book: ";
		if (totalCnt != 0)
			std::cout << totalRevenue / totalCnt << std::endl;
		else
			std::cout << "0" << std::endl;
		return 0;
	} else {
		std::cerr << "Data must refer to the same ISBN" << std::endl;
		return -1;
	}
	*/
	// end
	
	// 1.22
	// start
	/*
	Sales_data totalData, tempData;
	double price = 0.0;
	std::cout << "Please input book information: book_number, sold_units and price" << std::endl;
	while (std::cin >> tempData.bookNo >> tempData.units_sold >> price) {
		tempData.revenue = tempData.units_sold * price;
		if (totalData.bookNo == "")
			totalData = tempData;
		else {
			if (totalData.bookNo == tempData.bookNo) {
				totalData.units_sold += tempData.units_sold;
				totalData.revenue += tempData.revenue;
			} else {
				std::cerr << "Data must refer to the same ISBN" << std::endl;
				return -1;
			}
		}
	}
	std::cout << "Total book information:" << std::endl << totalData.bookNo << " " << totalData.units_sold << " " << totalData.revenue << std::endl;
	return 0;
	*/
	// end

	// 1.24
	// start
	/*
	Sales_data totalData, tempData;
	double price = 0.0;
	std::cout << "Please input book information: book_number, sold_units and price" << std::endl;
	if (std::cin >> totalData.bookNo >> totalData.units_sold >> price) {
		totalData.revenue = totalData.units_sold * price;
		while (std::cin >> tempData.bookNo >> tempData.units_sold >> price) {
			tempData.revenue = tempData.units_sold * price;
			if (totalData.bookNo == tempData.bookNo) {
				totalData.units_sold += tempData.units_sold;
				totalData.revenue += tempData.revenue;
			} else {
				std::cout << "Book information: " << std::endl << totalData.bookNo << " " << totalData.units_sold << " " << totalData.revenue << std::endl;
				totalData.bookNo = tempData.bookNo;
				totalData.units_sold = tempData.units_sold;
				totalData.revenue = tempData.revenue;
			}
		}
	} else {
		std::cerr << "No data!" << std::endl;
		return -1;
	}
	
	std::cout << "Total book information:" << std::endl << totalData.bookNo << " " << totalData.units_sold << " " << totalData.revenue << std::endl;
	return 0;
	*/
	// end
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
