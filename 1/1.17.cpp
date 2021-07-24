// 1.17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	std::cout << "Please enter some integers end with Ctrl + Z" << std::endl;
	int current_value = 0, value = 0;
	if(std::cin >> current_value)
	{
		int count = 1;
		while(std::cin >> value)
		{
			if (value == current_value)
				count++;
			else
			{
				std::cout << current_value << " occurs " << count << " times " << std::endl;
				current_value = value;
				count = 1;
			}
		}
		std::cout << current_value << " occurs " << count << " times " << std::endl;
	}
	return 0;
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
