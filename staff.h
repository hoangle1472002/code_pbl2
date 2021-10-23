#include <string>
#include "date.h"
using namespace std;
class Staff
{
protected:
    string IDStaff;
    string Name;
    Date Daystart;
    bool Sex;
    double Salary;
public:
    virtual ~Staff();
    virtual void kindof_Staff();
};
