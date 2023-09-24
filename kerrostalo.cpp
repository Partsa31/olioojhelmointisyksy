#include "kerrostalo.h"
#include "asunto.h"
#include "katutaso.h"
#include "kerros.h"
#include <iostream>
using namespace std;
kerrostalo::kerrostalo()
{
    cout<<"kerrostalo luotu"<<endl;
    cout<<"Maaritellaan koko kerrostalon kaikki asunnot"<<endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
}

double kerrostalo::laskeKulutus(double h)
{
    double kulutusEka = eka.laskeKulutus(h);
    double kulutusToka = toka.laskeKulutus(h);
    double kulutusKolmas = kolmas.laskeKulutus(h);

    double kulutus = kulutusEka + kulutusToka + kulutusKolmas;
    return kulutus;

}
