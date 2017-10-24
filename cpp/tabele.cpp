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
    int min = tab[0];
    int i = 0;
    for (i = 1; i < ile; i++){
        if (min > tab[i])
            min = tab[i];
        }
        cout << "Najmniejsza: "<< min << endl;
    }
    
    void ile5(int tab[], int ile){
        int i = 0;
        int licznik5=0;
        int parzyste=0;
        for (i = 0; i < ile; i++){
            if (tab[i] %5 == 0)
            licznik5++;
        }
        if (tab[i] %2 == 0)
            parzyste++;
        cout << "Liczby podzielne przez 5: "<< licznik5 << endl;
        cout << "Parzyste:"<< parzyste << endl;
}
int main(int argc, char **argv)

{
	int rozmiar = 0;
    cout << "Ile liczb podasz: ";
    cin >> rozmiar;
    
    int liczby[rozmiar];
    
    pobierzLiczby(liczby, rozmiar);
    sumujLiczby(liczby, rozmiar);
    najmniejsza(liczby, rozmiar);
    ile5 (liczby, rozmiar);
	return 0;
}

