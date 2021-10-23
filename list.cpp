#include"list.h"
template<class T>
inline List<T>::List(int soluongnv,T t)
    :soluongnv(soluongnv),danhsachnv(nullptr)
{
    this->danhsachnv = new T[this->soluongnv];
    for(int i=0;i<this->soluongnv;i++)
    {
        this->danhsachnv[i]=t;
    }   
}

template<class T>
inline List<T>::List(const List& l)
    :soluongnv(t.soluongnv)
{
    this->danhsachnv=new T[soluongnv];
    for(int i =0;i<this->soluongnv;i++)
    {
        this->danhsachnv[i]=l.danhsachnv[i];
    }    
}

template<class T>
inline List<T>::~List()
{
    delete []this->danhsachnv;
}

template<class T>
int List<T>::Get_soluongnv()
{
    this->soluongnv;
}

template<class T>
inline T& List<T>::operator[](int index)
{
    return this->danhsachnv[index];
}

template<class T>
inline List<T>::Add(const List& l)
{
}
inline List<T>::Modify(const List& l)
{
}
inline List<T>::Show(const List& l)
{
}
inline List<T>::Search(const List& l)
{
}
