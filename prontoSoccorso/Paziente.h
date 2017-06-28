#ifndef PAZIENTE_H
#define PAZIENTE_H
#include <iostream>
using namespace std;

class Paziente
{
    public:
        Paziente();
        Paziente(const string& n,const string& c,const string& i,unsigned int p);

        unsigned int getPriorita() const;
        void setPriorita(unsigned int p);
        const string& getNome() const;
        void setNome(const string& n);
        const string& getCognome() const;
        void setCognome(const string& c);
        const string& getIndirizzo() const;
        void setIndirizzo(const string& i);
    protected:
    private:
        unsigned int priorita;
        string nome,cognome,indirizzo;

};

#endif // PAZIENTE_H
