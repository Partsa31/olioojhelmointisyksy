#ifndef KERROSTALO_H
#define KERROSTALO_H
#include "asunto.h"
#include "katutaso.h"
#include "kerros.h"

class kerrostalo
{
public:
    kerrostalo();
    double laskeKulutus(double h);

private:
    katutaso eka;
    kerros toka;
    kerros kolmas;
};

#endif // KERROSTALO_H
