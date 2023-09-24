#include <iostream>
#include "asunto.h"
using namespace std;
#include "asunto.h"
#include "kerros.h"

kerros::kerros()
{
    cout<<"kerros luotu"<<endl;
}

void kerros::maaritaAsunnot()
{
    cout<<"Maaritetaan 4kpl asuntoja"<<endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);
    as3.maarita(2, 100);
    as4.maarita(2, 100);
}

double kerros::laskeKulutus(double h)
{
    double kulutus = h *(as1.asukasMaara * as1.neliot)+
                     (as2.asukasMaara *as2.neliot)+
                     (as3.asukasMaara*as3.neliot)+
                     (as4.asukasMaara + as4.neliot);
    return kulutus;
}
