#include <iostream>
#include "string"
using namespace std;
class BaseEntity
{
private:
    int id;
    int age;
    string name;
    string phoneNum;
public:
    // setters
    void setId(int id)
    {
        this -> id = id;
    }
    void setName(string name)
    {
        this -> name = name;
    }
    void setPhoneNum(string phoneNum)
    {
        this -> phoneNum = phoneNum;
    }
    void setAge(int age)
    {
        this -> age = age;
    }

    // getters
    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    string getPhoneNum()
    {
        return phoneNum;
    }
    int getAge()
    {
        return age;
    }
};