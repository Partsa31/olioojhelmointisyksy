#include "asunto.h"
#include <iostream>
using namespace std;
asunto::asunto()
{
    cout<<"asunto luotu"<<endl;
}

void asunto::maarita(int a, int n)
{
    asukasMaara = a;
    neliot = n;
    cout<<"Asunto maaritetty asukkaita= "<<asukasMaara<<"nelioita= "<<neliot<<endl;
}

double asunto::laskeKulutus(double h, bool printOrNot)
{
    double kulutus = h*asukasMaara*neliot;
    if(printOrNot==true){
           cout<<"asunnon kulutus, kun hinta= "<<h<<"on "<<kulutus<<endl;
    }
    return kulutus;
}
