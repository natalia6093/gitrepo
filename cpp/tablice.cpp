/*
 * tablice.cpp
 */
 
#include <iostream>
using namespace std;

void wprowadz(float *tab, int ile) {
    for (int i=0; i<ile; i++) {
        cout << "Ocena: ";
        cin >> *(tab+i);
    }
}
    
void drukuj(float *tab, int ile) {
    for (int i=0; i<ile; i++) {
        cout << *(tab+i) << " ";
    }
    cout << endl;
}
int tab1W() {
    float *tb = NULL;
    int ile;
    cout << "Ile podasz ocen? " << endl;
    cin >> ile;
    
    try {
        tb = new float[ile];
    } catch(bad_alloc) {
        cout << "Za mało pamięci!";
        return 1;
    }
    wprowadz(tb, ile);
    drukuj(tb, ile);
    return 0;
}

   

int main(int argc, char **argv)
{
	tab1W();
	return 0;
}

