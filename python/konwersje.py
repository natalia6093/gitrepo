#!/usr/bin/env python
# -*- coding: utf-8 -*-


def konwersja1():
    """ Funkcja zamienia liczbe dziesietną na system o podanej podstawie"""


def dec2other():
    """Funkcja pobiera liczbę i podstawe od użytkownika """
    liczba = int(input("Podaj liczbę: "))
    podstawa = int(input("Podaj podstawę: "))
    while podstawa < 2 or podstawa > 16:
        podstawa = int(input("Podaj podstawę: "))
    print("Wynik konwersji: {}(10) = {} ({}) ". format(
        liczba, konwersja1(liczba, podstawa), podstawa))


def main(args):
    print("Zamiana liczby dziesiętnej na liczbe o podanej podstawie"
          "<2;16> lub odwrotnie")
    dec2other()
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
