#include <iostream>
#include "BaseEntity.cpp"
using namespace std;
class Teacher : public BaseEntity
{
private:
    double salary;
public:
    Teacher()
    {
        salary = 0;
    }

    void setSalary(double salary)
    {
        this -> salary = salary;
    }

    double getSalary()
    {
        return salary;
    }
};
