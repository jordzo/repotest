#ifndef LISTA_HPP
#define LISTA_HPP

struct ELEMENT {
    int wartosc;
    ELEMENT *nastepny;
    
};

class Lista {
    private: // hermetyzacja danych
        ELEMENT* head;
        ELEMENT *tail;
    public: // interfejs publiczny klasy - API klasy
        Lista(); // konstruktor
        ~Lista(); //dekonstruktor
        void Dodaj(int);
        void Wyswietl();
        bool Usun();
        void Wstaw(int, int); // wstawianie do listy elementów  na zadanej pozycji
};

#endif
