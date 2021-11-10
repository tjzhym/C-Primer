// 3.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string string1, string2;
	cout << "Please input two strings" << endl;
	cin >> string1 >> string2;
	if (string1 == string2) {
		cout << "The two strings are equal." << endl;
	} else {
		cout << "The larger string is: " << ((string1 > string2) ? string1 : string2) << endl;
	}

	if (string1.size() == string2.size()) {
		cout << "The two strings have the same length." << endl;
	} else {
		cout << "The longer string is: " << ((string1.size() > string2.size()) ? string1 : string2) << endl;
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
