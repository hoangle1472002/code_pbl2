#include<iostream>
#include<iomanip>
#include<ctime>
#include<time.h>
using namespace std;
class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date();
    Date(int day, int month, int year);
    ~Date();
    static int TinhNgayLamViecThangHTai();
    friend ostream& operator<<(ostream& out,const Date& d);
    friend istream& operator>>(istream& in,Date& d);
};
