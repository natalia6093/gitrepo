/*
 * petle.cpp
 */


#include <iostream>
#include <cstdlib>

using namespace std;

void wypelnij(int tab[], int ile, int maks){
    srand(time(NULL));
    int i = 0;
    for (i = 0; i < ile; i++)
    {
        tab[i] = rand() % maks;
        }
}


int main(int argc, char **argv)
{
    
    int ile = 75;
    int maks = 200;
	int liczby[ile];
    int i = 0;
    int licznik = 0;
    
    wypelnij(liczby, ile, maks);
        
    for (i = 0; i < 50; i++)
    {
        cout << liczby[i] << " ";
        if(liczby[i]%2 == 0) {
            
            licznik++;
            }
        
        }
    cout << endl;
    cout << "Liczb parzystych: "<< licznik;
    
	return 0;
}

