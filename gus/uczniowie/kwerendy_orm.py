#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  kwerendy_orm.py
from uczniowie_model import *

def kw01():
    #SELECT * FROM uczen WHERE imie LIKE 'G%'
    query = Uczen.select().where(Uczen.imie.startswith('G'))
    print(query)

def main(args):
    baza.connect()
    
    kw01()
    
    baza.close()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
