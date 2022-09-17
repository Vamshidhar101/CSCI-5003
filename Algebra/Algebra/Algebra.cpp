// Algebra.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e, f;
	float x, y;

	cout << "Enter a,b,c,d,e,f";

	cin >> a >> b >> c >> d >> e >> f;

	if (((a * d) - (b * c)) == 0)
	{
		cout << "The equation has no solution";
	}
	else
	{
		x = float(((e * d) - (b * f)) / ((a * d) - (b * c)));
		cout << "x= " << x << endl;

		y = float(((a * f) - (e * c)) / ((a * d) - (b * c)));
		cout << "y= " << y;
	}

	return 0; 
}