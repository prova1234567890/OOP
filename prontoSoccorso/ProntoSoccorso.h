#ifndef PRONTOSOCCORSO_H
#define PRONTOSOCCORSO_H
#include "Paziente.h"

class ProntoSoccorso
{
public:
    ProntoSoccorso(){pazienti=new Paziente*[30]; pazientiInseriti=0;}
    ~ProntoSoccorso();
    void aggiungiPaziente(Paziente* p);
    void rimuoviProssimoPaziente();
    Paziente* prossimoPaziente() const;
    unsigned int numPazientiInAttesa() const;
    friend ostream& operator<<(ostream& out, const ProntoSoccorso& p);
private:
    Paziente** pazienti;
    unsigned int pazientiInseriti; //I pazienti inseriti
};

#endif // PRONTOSOCCORSO_H
