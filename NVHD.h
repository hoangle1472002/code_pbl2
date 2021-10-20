#include "Staff.h"
class Staff_NVHD: public Staff
{
private:
    double Salary_day;
public:
    Staff_NVHD(double =0);
    ~Staff_NVHD();
    double get_salary();
    double set_salary(double,int=0);
};