#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  horner.py
#  
#  Copyright 2017  <>
#  
#  This program is free software; you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation; either version 2 of the License, or
#  (at your option) any later version.
#  
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#  
#  You should have received a copy of the GNU General Public License
#  along with this program; if not, write to the Free Software
#  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
#  MA 02110-1301, USA.
#  
#  


def horner_it(stopien, tb, x):
	wynik = tb[0]
	for i in range(1, stopien + 1):
		wynik = wynik * x + tb[i]
	
	return wynik


def main(args):
	tb = []
	stopien = 3
	x = int(input("Podaj wartośc x: "))
	for i in range(0, 4):		
		tmp = int(input("Podaj współczynniki: "))
		tb.append(tmp)
		
	print("Wynik: ", horner_it(stopien, tb, x))
	return 0

if __name__ == '__main__':
    import sys
sys.exit(main(sys.argv))
