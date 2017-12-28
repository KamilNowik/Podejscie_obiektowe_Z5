#include <iostream>

using namespace std;

class Punkt
{
    float x,y;
    string nazwa;

public:
    void wyswietl()
    {
        cout<<nazwa<<" ("<<x<<","<<y<<")"<<endl;
    }
    Punkt(string n="S", float a=0, float b=0)
    {
        nazwa=n;
        x=a;
        y=b;
    }
};

class Kolo :public Punkt
{
    string nazwa;
protected:
    float r;

public:


    void wyswietl()
    {
        cout<<"Kolo o nazwie"<<nazwa<< endl;
        cout<<"Srodek kola: "<<endl;
        Punkt::wyswietl();
        cout<<"Promien kola: "<<r<<endl;
        cout<<"Pole kola: "<<3.14*r*r<<endl;
    }
    Kolo(string nk="Kolko", string np="S", float a=0, float b=0, float pr=1)
    :Punkt(np,a,b)
    {
        nazwa=nk;
        r=pr;
    }
};

class Kula :public Kolo
{
    string nazwa;
public:
    Kula(string nku="Kula", string np="S", float a=0, float b=0, float pr=1)
    :Kolo(nku,np,a,b,pr)
    {
        nazwa=nku;
    }

    void wyswietl()
    {
        Kolo::wyswietl();
        cout<<"Objetosc kuli wynosi: "<< (4.00/3)*3.14*r*r*r<< endl;
    }

};

int main()
{
    Kula ku1;
    ku1.wyswietl();


    return 0;
}
