// ExchangeRate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Ask what is required and asked in question

#include <iostream>
using namespace std;

int main()
{
    float rate, dollar, yuan;
    int choice;

    cout << "Enter the exchange rate from dollars to RMB:";
    cin >> rate;

    cout << "Enter 0 to convert dollars to RMB and 1 vice versa:";
    cin >> choice;

    if (choice == 0)
    {
        cout << "Enter the dollar amount:";
        cin >> dollar;

        yuan = dollar * rate;
        cout << dollar << " is " << yuan;

    }
    else if (choice == 1)
    {
        cout << "Enter the yuan amount:";
        cin >> yuan;

        dollar = yuan / rate;
        cout << yuan << " is " << dollar;
    }
    
    else
    {
        cout << "You have entered wrong input";
    }

    return 0;
}
