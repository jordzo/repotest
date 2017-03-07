#include <iostream>

using namespace std;



void szyfruj(char tekst[], int klucz){
    int i = 0; // indeks
    klucz = klucz %  26;
    while (tekst[i] != '\0'){
        if((int)tekst[i] + klucz > 122)
            tekst[i] = (char)((int)tekst[i] + klucz - 26);
        else
            tekst[i] = (char)((int)tekst[i] + klucz);

        //(int)tekst[i] przekształcenie/rzutowanie znaku na znak ascii
        //(char)((int)tekst[i]) - zamiana kodu ascii na znak

        i++;
    }
    cout << tekst; //wyświetlanie tabeli
}

int main(int argc, char **argv) {
    char tekst[100];
    int klucz = 3;
	cout << "Podaj tekst do zaszyfrowania ";
    //cin >> tekst;
    cin.getline(tekst, 100);
    cout << "Podaj klucz: ";
    cin >> klucz;
    szyfruj(tekst, klucz);

	return 0;
}

