#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  nwd.py
# znależć największy wspólny dzielnik dwóch liczb naturalnych

def nwd(a, b):
    while a!=b:
        if a>b:
            a = a - b
        else:
            b=b-a
        return a
        
def main(args):
    
    a=int(input('Podaj liczbę'))
    b=int(input('podaj liczbę'))
    
    print ('Najwięksy wspólny dzielnik', nwm(a, b))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
