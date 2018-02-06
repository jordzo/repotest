/*
 * lista_main.cpp
 * 
 * Copyright 2018  <>
 * 
 * 
 */


#include <iostream>
#include "lista.hpp"

int main(int argc, char **argv)
{
	Lista lista; // deklaracja zmiennej typu Lista
    lista.Dodaj(1);
    lista.Dodaj(2);
    lista.Dodaj(5);
    lista.Dodaj(8);
    lista.Wyswietl();
    lista.Usun();
    lista.Wyswietl();
	return 0;
}

