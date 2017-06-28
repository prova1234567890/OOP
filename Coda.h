#ifndef CODA_H
#define CODA_H
#include <iostream>
#include <list>
using namespace std;
template <class T>
//Coda con template
class Coda<T>:private list<T>
{
    public:
        Coda();
        void push_back(const T&t){list<T>::push_back(t);}
        void pop_front(){return list<T>::pop_front();}
        const T& front(){return list<T>::front();}
        bool empty(){return list<T>::empty();}
        void print()
        {
            for(typename list<T>::iterator it=list<T>::begin();it!=this->end();it++)
                cout<<*it;
        }
    protected:
    private:
};

#endif // CODA_H
