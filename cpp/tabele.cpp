/*
 * tabele.cpp
 */


#include <iostream>

using namespace std;

void pobierzLiczby(int tab[], int ile) {
    int i = 0;
    for (i = 0; i < ile; i++){
        cout << "Podaj liczbę: ";
        cin >> tab[i];
       }
    }
    
void sumujLiczby (int tab[], int ile){
    int i = 0;
    int suma = 0;
    for (i = 0; i < ile; i++){
        //cout << liczby[i] << " ";
        suma += tab[i];
        }
        cout << "Suma liczb: "<< suma << endl;
}    

void najmniejsza (int tab[], int ile){
    ; //funkcja znajduje i drukuje najmniejsza liczbe z tabeli
    }
int main(int argc, char **argv)

{
	int rozmiar = 0;
    cout << "Ile liczb podasz: ";
    cin >> rozmiar;
    
    int liczby[rozmiar];
    
    pobierzLiczby(liczby, rozmiar);
    sumujLiczby(liczby, rozmiar);
	return 0;
}

