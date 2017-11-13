/*
 * potega.cpp
 * a0 = 1
 * a1 = a
 * an = a*...*a (n-czynników) dla n zaw. N+ - {1}
 */

#include <iostream>

using namespace std;

float potega_it(float x, int n) {
    float wynik = 1;
    int i;
    for(int i = 0: i>=1;i++ ){
        //testuje ilość powtórzeń petli
        cout << i << endl;
    }
        return wynik;
}

int main(int argc, char **argv)
{
    float a = 0;
    int b = 0;
    cout << "Podaj podstawę: " << a << endl;
    cin >> a;
    cout << "Podaj wykładnik: " << b << endl;
    cin >> b;
    //pobierz od uzytkownika podstawę i wykładnik
    
    cout << "Potęga: " << potega_it() << endl;
	return 0;
}

