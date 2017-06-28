#ifndef PLAYLIST_H
#define PLAYLIST_H
#include "Canzone.h"

class Playlist
{
public:
    Playlist():canzoni(0),numeroCanzoni(0),numeroMassimoCanzoni(0){};
    Playlist(const Playlist& p);
    ~Playlist();
    void aggiungiCanzone(Canzone* c);
    void riproduciProssimaCanzone();
    Canzone* prossimaCanzone() const;
    unsigned int getNumCanzoniInCoda() const;
    friend ostream& operator<<(ostream& out, const Playlist& p);
protected:
    Canzone** canzoni; //Coda di canzoni
    unsigned int numeroCanzoni; //Numero di canzoni inserite
    unsigned int numeroMassimoCanzoni; //Numero massimo di canzoni inseribili

};

#endif // PLAYLIST_H
