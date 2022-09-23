// Chapter 16 exer  7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*Write a C++ program that prompts the user to enter his or her age and
then displays the message “You can drive a car in Kansas (USA)” when
the given age is greater than 14.*/
#include <iostream>
using namespace std;

int main()
{
	int age;

	cout << "enter the age " << endl;
	cin >> age;

	if (age > 14) {
		cout << "You can drive a car in kansas (USA)";
	}

}

