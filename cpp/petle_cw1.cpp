/*
 * petle_cw1.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int suma = 0;
    int liczba = 0;
    cout << "Wprowadzaj kolejne liczby ";
    
    while (1)
    {
      cin >> liczba;
      cout<< "Podano:" << liczba << endl;
      suma += liczba;
      if (suma > 75)
         break;
    };
    
    cout << "Suma liczb: "<< suma << endl;
	return 0;
}

