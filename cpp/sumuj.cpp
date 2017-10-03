/*
 * sumuj.cpp
 * program pobiera i sumuje 10 liczb wynuk drukuje na ekranie
 */
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int suma = 0;
    
    for (int i = 1; i < 11; i++) suma = suma +i;
    
        cout << suma;
    
	return 0;
}

