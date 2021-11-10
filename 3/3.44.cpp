// 3.44.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    using int_array = int[4];

    for (int_array &line : ia) {
	    for (int number : line) {
            cout << number << ' ';
	    }
    }
    cout << endl;

    for (size_t rowInex = 0; rowInex < 3; ++rowInex) {
	    for (size_t columnIndex = 0; columnIndex < 4; ++columnIndex) {
            cout << ia[rowInex][columnIndex] << ' ';
	    }
    }
    cout << endl;

    for (int_array *pLine = ia; pLine != ia + 3; ++pLine) {
	    for (int *pNumber = *pLine; pNumber != *pLine + 4; ++pNumber) {
            cout << *pNumber << ' ';
	    }
    }
    cout << endl;

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
