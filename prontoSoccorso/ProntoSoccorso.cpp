#include "ProntoSoccorso.h"

ProntoSoccorso::~ProntoSoccorso()
{

}

void ProntoSoccorso::aggiungiPaziente(Paziente* p)
{
    if(pazientiInseriti==30)
        return;
    unsigned i=0;
    if(pazientiInseriti>0)
    {
        while(i<pazientiInseriti && pazienti[i]->getPriorita()>=p->getPriorita())
            i++;
        for(unsigned j=pazientiInseriti;j>i;j--)
            pazienti[j]=pazienti[j-1];
    }
    pazienti[i]=p;
    pazientiInseriti++;
}

void ProntoSoccorso::rimuoviProssimoPaziente()
{

}

Paziente* ProntoSoccorso::prossimoPaziente() const
{
    if(pazientiInseriti>0)
        return pazienti[0];
    return 0;
}

int ProntoSoccorso::numPazientiInAttesa() const
{

}
