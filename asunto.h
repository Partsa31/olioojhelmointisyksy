#ifndef ASUNTO_H
#define ASUNTO_H
#include <iostream>
using namespace std;

class asunto
{
public:
    asunto();
    void maarita (int, int);
    double laskeKulutus(double, bool);

    int asukasMaara;
    int neliot;
};

#endif // ASUNTO_H
