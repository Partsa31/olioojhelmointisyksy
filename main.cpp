#include <iostream>
#include "kerrostalo.h"
using namespace std;

int main()
{
    kerrostalo kerrostalo;
    //asunto olio;
    //katutaso katutaso;
    //kerros kerros;
    //katutaso.maaritaAsunnot();
    //kerros.maaritaAsunnot();
    //katutaso.laskeKulutus(1);
    //kerros.laskeKulutus(1);
    //cout << "Katutason ja perityn kerroksen kulutus, kun hinta = 1, on " << olio.laskeKulutus() << endl;

    //olio.maarita(2,100);
    //olio.laskeKulutus(1);
    //cout<<"kerrostalon kulutus = "<<olio.laskeKulutus(1,false)<<endl;
    double kulutus = kerrostalo.laskeKulutus(1);
    cout<<"kerrostalon kulutus on "<<kulutus<<endl;

    return 0;
}
