#include <iostream>
#include <cstdlib>
#include "PROJECT.h"
using namespace std;

//---------------------- ZMIENNE GLOBALNE----------------------------
int wybor;
int *tura= 0;
int koniec = 0;
char b = 'X';
char znak = 'X';
int pole;


//-------------------------- ZMIENNE ------------------------------

PROJECT P = PROJECT();

//----------------------- G£OWNY PROGRAM ----------------------------
int main()
{

    do
    {

        // p.wyswietl_drzewo();
        cout<<"------------------------------------------"<<endl;
        cout<<"   Program do zarzadzania projektami  "<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"1 - wyswietl aktualna liste projektow -"<<endl;
        cout<<"2 - Dodaj projekt do listy - "<<endl;
        cout<<"3 - Usun projekt z listy - "<<endl;
        cout<<"4 - Zapisz zmiany i zamknij program - "<<endl;
        cout<<"5 - Wczytaj plik z danymi - "<<endl;
        cout<<"----------------------------------------"<<endl;

        cout<<"Podaj swoj wybor"<<endl;
        cin>>wybor;
        P.switch_project(wybor);
    }
    while(wybor!=4);
    P.save_quit();
    return 0;
}