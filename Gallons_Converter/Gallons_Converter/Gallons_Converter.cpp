// Gallons_Converter.cpp
#include <iostream>
using namespace std;

int main()
{
    cout << "Gallons Converter" << endl;
    cout << "Enter gallons: " << endl;
    double gal = 0.0, ltr = 0.0, qrt = 0.0, onc = 0.0;
    cin >> gal;
    ltr = gal * 3.7854;
    qrt = gal * 4;
    onc = gal * 128;
    cout << "Liters : " << ltr << endl << "Quarts : " << qrt << endl
        << "Onces : " << onc << endl;
    cout << "\nBye !"<< endl;
}