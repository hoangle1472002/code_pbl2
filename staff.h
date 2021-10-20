#include <string>
#include "date.h"
using namespace std;
class Staff
{
private:
    string IDStaff;
    string Staffname;
    Date Daystart;
    string Sex;
protected:
    double Salary;
public:
    Staff();
    Staff(string,string,Date,string,double);
    ~Staff();
    void set_salary(Staff_NVHD);
};