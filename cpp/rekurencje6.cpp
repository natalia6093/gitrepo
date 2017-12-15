/*
 * rekurencje6.cpp
 */

#include <iostream>

using namespace std;

int euklides_rek(int a, int b)
{
    if (b == 0)
        return a;
    return euklides_rek(b,a % b);
}
int main(int argc, char **argv)
{
	int a;
	int b;
	cout <<"Podaj pierwszą liczbę: "<<endl;
	cin >> a;
	cout<< "podaj drugą liczbę: "<<endl;
	cin >> b;
	cout<<"największy wspólny dzielnik: " << euklides_rek(a, b) << endl;

	return 0;
}
