// 3.36.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <vector>
using namespace std;


int main() {
	int aArray[5], bArray[5];
	vector<int> aVector(5, 0), bVector(5, 0);
	int number = 0;
	cout << "Please input five numbers: " << endl;
	for (int index = 0; index < 5; ++index) {
		cin >> number;
		aArray[index] = number;
		aVector[index] = number;
	}
	cout << "Please input another five numbers: " << endl;
	for (int index = 0; index < 5; ++index) {
		cin >> number;
		bArray[index] = number;
		bVector[index] = number;
	}
	bool isEqual = true;
	for (int index = 0; index < 5; ++index) {
		if (aArray[index] != bArray[index]) {
			isEqual = false;
			break;
		}
	}
	if (isEqual) {
		cout << "The two arrays are equal." << endl;
	} else {
		cout << "The two arrays are not equal." << endl;
	}
	if (aVector == bVector) {
		cout << "The two vectors are equal." << endl;
	} else {
		cout << "The two vectors are not equal." << endl;
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
