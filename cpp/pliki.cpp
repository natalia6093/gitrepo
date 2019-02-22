/*
 * pliki.cpp
 */


#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <iomanip>

using namespace std;

void zmienNazwe1(char t1[], char t2[]) {
    // kopiowanie znaków z tablicy do tablicy
    // METODA 1
    int i=0;
    while(t1[i] != '.') {
        t2[i] = t1[i];
        i++;
    }
    t2[i]='.';
    t2[++i]='b';
    t2[++i]='a';
    t2[++i]='k';
    t2[++i]='\0';
}


void zmienNazwe2(char t1[], char t2[]) {
    // kopiowanie znaków z tablicy do tablicy
    // METODA 2
    // tekst.txt
    char *wsk;
    strcpy(t2, t1);
    wsk = strstr(t2,".txt");
    strncpy(wsk, ".bak", 4);
    
}

void liczZnaki(char nazwa[]) {
    char kopia[15];
    zmienNazwe2(nazwa, kopia);
    cout << kopia;
}


int main(int argc, char **argv)
{
    char nazwa[15];
	cout << "Podaj nazwę pliku: ";
    cin.getline(nazwa, 15);
    cout << nazwa << endl;
    liczZnaki(nazwa);
	return 0;
}

