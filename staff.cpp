#include "staff.h"
Staff::Staff(string IDStaff, string Staffname, Date Daystart, string Sex, double Salary)
{
    this->IDStaff = IDStaff;
    this->Staffname = Staffname;
    this->Daystart = Daystart;
    this->Sex = Sex;
    this->Salary = Salary;
}
Staff::Staff(){}
Staff::~Staff(){}