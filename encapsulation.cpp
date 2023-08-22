#include<iostream>
using namespace std;
class Employee{
private:
    string Name;
    string Company;
    int Age;
public:
    void setName(string name) //Setter
    { 
        Name=name;
    }
    string getName()
    {
        return Name;
    }
    void setAge(int age) //Setter
    { 
        if(age>=18)
         Age=age;
    }
    int getAge()
    {
        return Age;
    }

};
int main()
{
    Employee e1;
    e1.setName("LUCKY");
    e1.setAge(20);
    cout<<"My Name is : "<<e1.getName()<<" and Age is : "<<e1.getAge()<<" ";
}
