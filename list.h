#include<iostream>
template<class T>
class List{
    private:
    T* danhsachnv;
    int soluongnv;
    public:
    List(int soluongnv =0,T t=T());
    List(const List& l);
    ~List();
    int Get_soluongnv();
    void Add(const List& l);
    void Modify(const List& l);
    void Show(const List& l);
    void Search(const List& l);
    // void Arrange(const List& l);

    T& operator[](int index);
};
