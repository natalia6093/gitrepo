/*
 * wektork.cpp
 */
 
#include <iostream>
using namespace std;

class Wektor {
    private:
        double x;
        double y;
    public:
        void pobierz(int);
        void wypisz();
};

void Wektor::pobierz(int nr) {
    cout << "Podaj współrzędne " << nr << " wektora: " << endl;
    cin >> x;
    cin >> y;
}

void Wektor::wypisz() {
    cout << "Wektor nr " << nr << " : ";
    cout << "[" << x << "," << y << "]" << endl;
    
}


int main(int argc, char **argv)
{
	Wektor w1, w2;
    w1.pobierz(1);
    w2.pobierz(2);
    w1.wypisz();
    w2.wypisz();
	return 0;
}

