#pragma once
#include<iostream>
using namespace std;



class Zwierzak{
    public:
        static const float maxenergia;
        static const float maxmorale;
        static int ilosc;
    void Patrz();
    void Oddychaj();  
    void Zyj();
    void ShowStats();
    Zwierzak();
    Zwierzak(string,int,float);
    protected:

    float Mass;
    int Wiek;
    string Imie;
    float Energia;
    float Morale;
    char Plec;

};
