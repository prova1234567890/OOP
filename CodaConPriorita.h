#ifndef CODACONPRIORITA_H
#define CODACONPRIORITA_H
template<class T>

class CodaConPriorita:public Coda<T>
{
    public:
        CodaConPriorita();
        void push_back(const T&t)
        {
            typename list<T>::iterator it=this->begin()
               while(it!=this->end()&&*it>=t)
                it++;

        }
    protected:
    private:
};

#endif // CODACONPRIORITA_H
