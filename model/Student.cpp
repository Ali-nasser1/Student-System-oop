#include <iostream>
#include "BaseEntity.cpp"
using namespace std;
class Student : public BaseEntity
{
private:
    double GPA;
public:

    Student()
    {
        GPA = 0;
    }

    void setGPA(double GPA)
    {
        this -> GPA = GPA;
    }

    double getGPA()
    {
        return GPA;
    }
};
