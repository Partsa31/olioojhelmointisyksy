#ifndef KATUTASO_H
#define KATUTASO_H
#include "kerros.h"
#include "asunto.h"
class katutaso : public kerros
{
public:
    katutaso();

    void maaritaAsunnot()override;
    double laskeKulutus(double);

    asunto as1;
    asunto as2;
};

#endif // KATUTASO_H
