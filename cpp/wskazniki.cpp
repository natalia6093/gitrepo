/*
 * wskazniki.cpp
 */
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int x = 13;
    int *wsk1; // zmienna wskaźnikowa
    wsk1 = &x; // inicjacia wskaźnika
    cout << x << endl;
    cout << wsk1 << endl;
    cout << &x << endl; 
    
    *wsk1 += 1;
    cout << *wsk1 << endl;
	return 0;
}

