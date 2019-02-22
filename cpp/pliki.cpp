/*
 * pliki.cpp
 */


#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <iomanip>

using namespace std;

void zmienNazwe(char t1[], char t2[]) {
    // kopiowanie znaków z tablicy do tablicy
    // METODA 1
    int i=0;
    while(t1[i] != '.') {
        t2[i] = t1[i];
        i++;
    }
}


void liczZnaki(char nazwa[]) {
    char kopia[15];
    zmienNazwe(nazwa, kopia);
    cout << kopia;
}


int main(int argc, char **argv)
{
    char nazwa[15];
	cout << "Podaj nazwę pliku: ";
    cin.getline(nazwa, 15);
    cout << nazwa;
    wynik = liczZnaki(nazwa);
	return 0;
}

