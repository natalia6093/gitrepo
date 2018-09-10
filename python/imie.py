#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  imie.py



def main(args):
    
    osoba = input('Jak się nazywasz?')
    print('Witaj,' , osoba, '!')
    
    dzialanie = input("Dzialanie?")
    
    if dzialanie == "+":
        print (a + b)
    elif dzialanie == "-":
        print (a - b)
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
