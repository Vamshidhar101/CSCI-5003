// Area Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "AREA CALCULATOR" << endl;
	cout << "1. Circle" << endl
		<< "2. Square" << endl
		<< "3. Rectangle" << endl;
	
	int choice = 0;
	cout << "\nMenu item:  ";
	cin >> choice;
	cout << endl;

	double r = 0.0, area = 0.0, h = 0.0, w = 0.0;

	switch (choice)
	{
		
	case 1:
		
		cout << "CIRCLE" << endl
			<< "Radius:  ";
		cin >> r;

		area = 3.14159 * r * r;
		cout << "Area:    " << area;
		break;

	case 2:
		cout << "SQUARE" << endl
			<< "Side length: ";
		cin >> h;

		area = h * h;
		cout << "Area:    " << area;
		break;

	case 3:
		cout << "RECTANGLE" << endl
			<< "Height: ";
		cin >> h;
		cout << "Width: ";
		cin >> w;

		area = h * w;
		cout << "Area:    " << area;
		break;

	default:
		cout << "Invalid menu item!";
		break;
	}

	cout << "\n\nBye!";
	return 0;
}