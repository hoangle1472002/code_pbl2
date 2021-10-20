#include"NVHD.h"
Staff_NVHD::Staff_NVHD(double Salary_day)
:Salary_day(Salary_day)
{}
Staff_NVHD::~Staff_NVHD(){}
double Staff_NVHD::get_salary()
{
    return this->Salary_day;
}
double Staff_NVHD::set_salary(double Salary_day,int worked_day)
{   
    double salary=worked_day*Salary_day;
    return salary;
}

void Staff::set_salary(Staff_NVHD a)
{
    this->Salary=a.set_salary(this->,a.get_salary());
}
