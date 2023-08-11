class Student
{
private:
    int id;
    int age;
    string name;
    string phoneNum;
    double GPA;
public:
    Student()
    {
        id = age = GPA = 0;
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
    void setGPA(double GPA)
    {
        this -> GPA = GPA;
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
    double getGPA()
    {
        return GPA;
    }
};
