#include<iostream>
#include<cstdlib>
#include "Ryba.h"
#include "Ssak.h"
#include "Ptak.h"
#include "zwierze.h"
using namespace std;

int Zwierzak::ilosc;

int main()
{
    typedef enum akcjawybor{Dodaj = 'd', Wybierz = 'w'};
    typedef enum zwierzwybor{Ptak = 'p', Ryba = 'r', Ssak = 's'};
    cout << "Oto gra. Ilosc zwierzat w systemie: " << Zwierzak::ilosc << endl;
    char wybor;
    while (true)
    {

        cout << "Dodaj zwierze: a" << endl;
        cout << "Wybierz zwierze: s" << endl;
        while(wybor = getchar())
        switch(wybor)
        {
        case 'a':
            cout << "Wybierz typ zwierzecia: "<< endl;
            cout << "Ptak -> p" << endl;
            cout << "Ryba -> r" << endl;
            cout << "Ssak -> s" << endl;
            cin >> wybor;
            switch (wybor)
            {
                case 'p':
                    cout << "Wybierz gatunek: " << endl;
                    cout << "Papuga -> p" << endl;
                    cout << "Kanarek -> k" << endl;
                    cout << "Golab -> p" << endl;
                    break;
            default:
                cout << "Nie prawidlowy typ " << endl;
                break;
            }
            break;

        default:
            break;
        }
        
    }
   

    Pies p1;




    return 0;
}
