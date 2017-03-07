#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  Szyfr Cezara
#
#  Copyright 2017 user <user@lap79>
#
#

def szyfruj(tekst, klucz):
    szyfrogram = ""
    for i in range(len(tekst)):
        if ' ':
            szyfrogram =+ " "
        if ord(tekst[i]) + klucz > 122:
            szyfrogram += chr(ord(tekst[i]) + klucz - 26)
        else:
            szyfrogram += chr(ord(tekst[i]) + klucz)
    print szyfrogram


def main(args):
    tekst = raw_input("Podaj tekst: ")
    klucz = int(raw_input("Podaj klucz: ")
    szyfruj(tekst, klucz)

    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
