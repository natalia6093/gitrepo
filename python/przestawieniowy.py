#!/usr/bin/env python
# -*- coding: utf-8 -*-

def szyfruj(tekst, klucz):
    reszta = len(tekst) % klucz
    if reszta:
        tekst += (klucz - reszta) * "."
        print("Tekst: ")

        szyfrogram = ""
        for i ina range(klucz):
            szyfrogram += teskt[i + klucz]
        return ""


def main(args):
    tekst = input("Podaj tekst: ")
    klucz = int(input("Klucz: "))
    while 2 * klucz > len(tekst):
        klucz = int(input("Klucz: "))

    szyfrogram = szyfruj(tekst, klucz)
    print(szyfrogram)
    # print(deszyfruj(szyfrogram, klucz))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
