// Invoice Total Calculator 3.0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "The Invoice Total Calculator 3.0" << endl 
        << endl;

    char type;
    cout << "Enter customer type (r/w/c):";
    cin >> type;

    double subtotal = 0.0, dispercent = 0.0,
        disamount = 0.0, total = 0.0;
    cout << "Enter subtotal:            ";
    cin >> subtotal;

    switch (type)
    {
    case 'r':
    case 'R':
        if (subtotal < 100)
        {
            dispercent = 0.0;
            cout << "Discount percent:          "
                << dispercent;
        }
        else if (subtotal >= 100 && subtotal < 250)
        {
            dispercent = 0.1;
            cout << "Discount percent:          "
                << dispercent;
        }
        else if (subtotal >= 250 && subtotal < 500)
        {
            dispercent = 0.2;
            cout << "Discount percent:          "
                << dispercent;
        }
        else if (subtotal >= 500)
        {
            dispercent = 0.3;
            cout << "Discount percent:          "
                << dispercent;
        }
        break;

    case 'w':
    case 'W':
        if (subtotal < 500)
        {
            dispercent = 0.4;
            cout << "Discount percent:          "
                << dispercent;
        }
        else if (subtotal >= 500)
        {
            dispercent = 0.5;
            cout << "Discount percent:          "
                << dispercent;
        }
        break;

    case 'c':
    case 'C':
        dispercent = 0.25;
        cout << "Discount percent:          "
            << dispercent;
        break;

    default:
        cout << "Invalid Input" << endl;
        break;
    }
    disamount = subtotal * dispercent;
    cout << "\nDiscount amount:           " 
        << disamount << endl;

    total = subtotal - disamount;
    cout << "Invoice total:             " 
        << total << endl;

    cout << "\nBye!";
    
    return 0;
}
