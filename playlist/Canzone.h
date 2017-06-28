#ifndef CANZONE_H
#define CANZONE_H
#include <iostream>
using namespace std;

class Canzone
{
    public:
        Canzone();
        Canzone(const string& c,const string& t);
        const string& getCantante() const;
        void setCantante(const string& c);
        const string& getTitolo() const;
        void setTitolo(const string& t);
    protected:
    private:
        string cantante,titolo;
};

#endif // CANZONE_H
