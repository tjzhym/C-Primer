// 1.13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int sum = 0;
	for (int value = 50; value <= 100; value++)
	{
		sum += value;
	}
	std::cout << " The sum of 50 to 100 is " << sum << std::endl;

	sum = 0;
	for (int value = 10; value >= 1; value--)
	{
		sum += value;
	}
	std::cout << " The sum of 10 to 1 is " << sum << std::endl;

	sum = 0;
	int lower_bound = 0, upper_bound = 0;
	std::cout << "Enter two integers:(lower first)" << std::endl;
	std::cin >> lower_bound >> upper_bound;
	for (int value = lower_bound; value <= upper_bound; value++)
	{
		sum += value;
	}
	std::cout << " The sum of " << lower_bound << " to " << upper_bound << " is " << sum << std::endl;
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
