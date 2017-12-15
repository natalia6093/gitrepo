/*
 * rekurencje5.cpp
 */

#include <cstdlib>
#include <iostream>

using namespace std;
int ciag_rek(int a)
{
        if (a==0)
            return 0;
        return ciag_rek((a-1)+1+(a-1)*2);
}
int main(int argc, char *argv[])
{
        int a;
        cout << "Podaj wyraz ciagu: ";
        cin >> a;
        cout << ciag_rek(a);
        return 0;
}
