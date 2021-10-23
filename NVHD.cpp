#include"NVHD.h"
#include<iostream>
#include<string>
using namespace std;
NVHD::NVHD()
{

}
NVHD::NVHD(string IDStaff,string Name,Date Daystart,bool Sex, double Salary_day)
{
    this->IDStaff=IDStaff;
    this->Name=Name;
    this->Daystart=Daystart;
    this->Sex=Sex;
    this->Salary_day=Salary_day;
}

ostream& operator<<(ostream out,NVHD& nv)
{
    out<<"ID Staff : "<<nv.IDStaff<<endl;
    out<<"Name : "<<nv.Name<<endl;
    out<<"Started Day : "<<nv.Daystart<<endl;
    if(nv.Sex)
        out<<"Sex : Male"<<endl;
    else 
        out<<"Sex : Female"<<endl;
    
    Date Worked_Day;
    out<<"Daily Salary : "<<nv.Salary_day<<endl;
    out<<"Salary : "<<nv.Salary_day * Worked_Day.TinhNgayLamViecThangHTai() <<"VNĐ"<<endl;
    return out;
}
istream& operator>>(istream in,NVHD& nv)
{
    cout<<"Enter ID Staff : ";
    in>>nv.IDStaff;
    cout<<"Enter Staff's Name : ";
    in>>nv.Name;
    cout<<"Enter Started Day : ";
    in>>nv.Daystart;
    cout<<"Enter Sex : ";
    in>>nv.Sex;
    cout<<"Enter Daily Salary : ";
    in>>nv.Salary_day;
    return in;
}

