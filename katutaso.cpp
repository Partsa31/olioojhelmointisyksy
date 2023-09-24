#include <iostream>
using namespace std;
#include "katutaso.h"
#include "asunto.h"
katutaso::katutaso()
{
    cout<<"katutaso luotu"<<endl;
}

void katutaso::maaritaAsunnot()
{
    cout<<"Maaritetaan 2 kpl katutason asuntoja"<<endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);
    cout<<"Maaritetaan katutaso kerrokselta perittyja asuntoja"<<endl;

    kerros::maaritaAsunnot();
}

double katutaso::laskeKulutus(double h)
{
    double kulutus = h*(as1.asukasMaara*as1.neliot)+
                     (kerros::as1.asukasMaara*kerros::as1.neliot)+
                     (kerros::as2.asukasMaara*kerros::as2.neliot)+
                     (kerros::as3.asukasMaara*kerros::as3.neliot)+
                     (kerros::as4.asukasMaara*kerros::as4.neliot);
                     return kulutus;
}

