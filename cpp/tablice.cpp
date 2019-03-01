/*
 * tablice.cpp
 */
 
#include <iostream>
using namespace std;

void wprowadz(float tb[], int  ile) {
    cout << "Podaj oceny:\n ";
    for (int i=0; i<ile; i++) {
        cin >> tb[i];
    }
}
    
void drukuj(float tb[], int  ile) {
    cout << "Podane oceny";
    for (int i=0; i<ile; i++) {
        cout << tb[i] << " ";
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
    return 1;
}

   

int main(int argc, char **argv)
{
	tab1W();
	return 0;
}

