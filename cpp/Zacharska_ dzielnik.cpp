/*
 * Zacharska_ dzielnik.cpp
 */

#include <iostream>
using namespace std;
int main()
{
    int wartosc;
    cout << "Podaj wartość: ";
    cin >> wartosc;
    cout << "Dzielniki liczby: " << wartosc << " Wynoszą: ";
    for (int i = wartosc; i > 0; i--)
    {
        if (wartosc % i == 0)
            cout << wartosc / i << " "<< endl;
    }
    return 0;
}

