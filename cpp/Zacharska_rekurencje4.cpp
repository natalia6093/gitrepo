/*
 * rekurencje4.cpp
 */
#include <iostream>
int funkcja( int tab[] )
{
   
    if( int i = 0; i < 5; i++ )
        return 5;
    return tab[ i ] * funkcja( tab );
    
   
}

using namespace std;

int main()

{
    int tablica[ 5 ];
   
    for( int i = 0; i < 5; i++ ) 
    {
        cout << "wartośc " << i << " elementu" << endl;
        cin >> tab[ i ];
    }
   
    cout << funkcja( tab ); 
   
    return 0;
}
	

