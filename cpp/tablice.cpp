/*
 * tablice.cpp
 */
 
#include <iostream>
using namespace std;


int tab1W() {
    float *tb = NULL;
    int ile;
    cout << "Ile podasz ocen? " << endl;
    cin >> ile;
    
    try {
        tb = new float[ile];
    } catch(bad_alloc) {
        cout << "Za mało pamięci!";
        return 1
    }
}

int main(int argc, char **argv)
{
	tab1W();
	return 0;
}

