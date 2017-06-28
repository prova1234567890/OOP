#include "Playlist.h"

Playlist::Playlist(const Playlist& p)
{
    numeroCanzoni=p.numeroCanzoni;
    numeroMassimoCanzoni=p.numeroMassimoCanzoni;
    canzoni=0;
    if(p.canzoni!=0)
    {
        canzoni=new Canzone*[numeroMassimoCanzoni];
        for(unsigned i=0;i<numeroCanzoni;i++)
            canzoni[i]=p.canzoni[i];
    }
}

Playlist::~Playlist()
{

}

void Playlist::aggiungiCanzone(Canzone* c)
{
    if(numeroCanzoni==numeroMassimoCanzoni)
    {
        if(numeroMassimoCanzoni==0)
            numeroMassimoCanzoni=1;
        else
            numeroMassimoCanzoni*=2;
        Canzone** tmp=new Canzone*[numeroMassimoCanzoni];//perché nel main è creato dinamicamente quindi un puntantore ad un puntatore
        for(unsigned i=0;i<numeroCanzoni;i++)
            tmp[i]=canzoni[i];
        delete[] canzoni;
        canzoni=tmp;
    }
    canzoni[numeroCanzoni]=c;
    numeroCanzoni++;
}

void Playlist::riproduciProssimaCanzone()
{

}

Canzone Playlist::prossimaCanzone() const
{

}

int Playlist::getNumCanzoniInCoda() const
{

}
