#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  hello.py
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
ROK_TERAZ = 2017
ROK_PYTHON = 1991

def parzyste(n):
    ile = list(range(0, n+1, 2))
    print(ile)
    return len(ile)
    

def main(args):
    imie = input("Imię?")
    wiek = int(input("Ile masz lat?"))
    rok_urodzenia = ROK_TERAZ - wiek
    print("Witaj", imie)
    print("Rok urodzenia: ", rok_urodzenia)
    
    if ROK_PYTHON < rok_urodzenia:
        print("Jestem starszy")
    elif ROK_PYTHON > rok_urodzenia:
        print("Jestem młodszy")
    elif ROK_PYTHON == rok_urodzenia:
        print("Mamy tyle samo lat")
       
    n = int(input("Podaj liczbe naturalną: "))
    print("Ilość parzystych: ", parzyste(n))   
       
    return 0
        

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
