// 3.39.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


int main() {
    string s1 = "This is a string.", s2 = "This is an another string.";
    char ca1[] = "This is a string.", ca2[] = "This is an another string.";

    if (s1 == s2) {
        cout << "The two strings are the same." << endl;
    } else {
        cout << "The two strings are different." << endl;
    }

    if (!strcmp(ca1,ca2)) {
        cout << "The two strings are the same." << endl;
    } else {
        cout << "The two strings are different." << endl;
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
