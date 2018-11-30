#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  kwerendy_orm.py
from uczniowie_model import * 

def kw01(): 
    # query = Uczen.select().where(Uczen.imie.startswith('G'))
    # query = Uczen.select().where(Uczen.imie == 'Rafał')
    # query = Uczen.select().where(Uczen.imie == 'Rafał').count()# dolowna zmienna , ta wybiera wszystkich uczniów z klasy 
    # print(query)
    query = Uczen.select().where(Uczen.egz_mat > 40)
    for obj in query:
        print(obj.nazwisko, obj.imie, obj.egz_mat)

def main(args):
    baza.connect()
    
    kw01()
    
    baza.close()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))


