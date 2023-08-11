class Teacher
{
private:
    int id;
    int age;
    string name;
    string phoneNum;
    double salary;
public:
    Teacher()
    {
        id = age = salary = 0;
        name = phoneNum = "";
    }
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
    void setSalary(double salary)
    {
        this -> salary = salary;
    }
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
    double getSalary()
    {
        return salary;
    }
};
