/*
 * hello.cpp
 * 
 * Copyright 2017  <>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

#include <iostream>

using namespace std;

#define ROK_TERAZ 2017
#define ROK_CPP 1983

int parzyste(int n)
{
    int i = 0;
    for(i = 0; i<=n; i+=2)
        cout << i << " ";
    return i/2;
}

int nieparzyste(int m);

int main(int argc, char **argv)
{
    //-const int ROK_TERAZ 2017 
    //-char imie[20]
    string imie;
    int wiek;
    int rok_urodzenia;
    
    
    cout << "Jak masz na imię?" << endl;
    cin >> imie;
    cout << "Ile masz lat?" << endl;
    cin >> wiek;
    rok_urodzenia = ROK_TERAZ-wiek;
    cout << "Witaj" << imie << endl;
    cout << "Rok urodzenia: " << rok_urodzenia << endl;
     
    if (ROK_CPP < rok_urodzenia)
        cout << "Jestem starszy";
    else if (ROK_CPP > rok_urodzenia)
        cout << "Jestem młodszy";
    else if (ROK_CPP == rok_urodzenia)
        cout << "Mamy tyle samo lat!";
        
    int n;
    cout << "Podaj liczbę naturalną: ";
    cin >> n;
    cout << "Ilość parzystych: " << parzyste(n);
    
    
	return 0;
}

