#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  baza.py
import csv
import sqlite3
import os.path

def czy_jest(plik):
    if not os.path.isfile(plik):
        print("Plik {} nie istnieje". format(plik))
        return False
    return True

def czytaj_dane(plik, separator=","):
    dane = []  # pusta lista
    
    if not czy_jest(plik):
        return dane
    
    with open (plik, newline ='', encoding='utf-8') as plikcsv:
        tresc = csv.reader(plikcsv, delimiter=separator)
        for rekord in tresc:
            dane.append(rekord)
    return dane
    

def main(args):
    ###KONFIGURACJA###
    baza_nazwa = 'szkola'
    tabele = ['nazwiska', 'dane_osobowe', 'oceny']
    roz = '.txt'
    ##################
    
    
    
    con = sqlite3.connect(baza_nazwa + 'baza.db')
    cur = con.cursor() # obietk tzw. kursora
    
    if not czy_jest(baza_nazwa + '.sql'):
        return
    
    with open(baza_nazwa + '.sql') as plik:
        cur.executescript(plik.read())
        
    #   pass
    
    #czytaj_dane('nazwiska.txt', ' ')
    #czytaj_dane('dane-osobowe.txt', '\t')
    #czytaj_dane('oceny.txt', ' ')
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
