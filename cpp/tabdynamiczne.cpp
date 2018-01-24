/*
 * tabdynamiczne.cpp
 * 
 * Copyright 2018  <>
 * 
 * 
 * 
 */


#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

void wypelnij2W(int **tab, int w, int k) {
    srand(time(NULL));
    for(int i =1; i <w; i++){
        for(int j = 1; j < k; j++){
            //tak[0][0]
            tab[i][j] = ;
            cout << setw(4) << tab[i][j];
        }
        cout << endl;
    }
}

int tab2W() {
    int w, k, i;
    cout << "Podaj liczbę wierszy i kolumn: ";
    cin >> w >> k;
    int **tab;
    
    try{
        tab = new int*[w];
    } catch (bad_alloc) {
        cout << "Za mało pamięci!";
        return 1;
    }
    
    for(i = 0; i < w; i++) {
        try {
            tab[i] = new int[k];
        } catch (bad_alloc) {
            cout << "Za mało pamięci!";
            return 1;
        }
    }
    return 0;
}

int main(int argc, char **argv)
{
    tab2W();
	return 0;
}

