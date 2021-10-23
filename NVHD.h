#include "Staff.h"
class NVHD: public Staff
{
private:
    double Salary_day;
public:
    NVHD();
    NVHD(string,string,Date,bool,double);
    ~NVHD();

    friend ostream& operator<<(ostream out,NVHD& nv);
    friend istream& operator>>(istream in,NVHD& nv);

private:
    virtual void kindof_Staff();
};
