#include "date.h"
#include<time.h>
#include<ctime>
using namespace std;
Date::Date()
{
    
}
Date::Date(int day, int month, int year)
    : day(day), month(month), year(year)
{

}
Date::~Date()
{

}

int Date::TinhNgayLamViecThangHTai()
{

}

ostream& operator<<(ostream& out,const Date& d)
{
    out<<d.day<<"/"<<d.month<<"/"<<d.year<<endl;
    return out;
}
istream& operator>>(istream& in,Date& d)
{
    cout<<"Enter day : ";
    in>>d.day;
    cout<<"Enter month : ";
    in>>d.month;
    cout<<"Enter year : ";
    in>>d.year;
    return in;
}
