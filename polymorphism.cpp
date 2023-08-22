#include <iostream>
using namespace std;

class AbstractEmployee
{
    virtual void askForIncreaceSalary() = 0; // Pure Virtual Function
};
class Employee : public AbstractEmployee
{
private:
    string name;
    string company;
    int age;

public:
    Employee(string Name, string Company, int Age)
    {
        name = Name;
        company = Company;
        age = Age;
    }
    string getCompany()
    {
        return company;
    }
    string getName()
    {
        return name;
    }
    
    int getAge()
    {
        return age;
    }
    void work()
    {
        cout<<name <<" is Working in "<<company<<endl;
    }
    void askForIncreaceSalary()
    {
        if (age > 25)
        {
            cout << " Congratulation " << name << " you got promoted!!!!" << endl;
        }
        else
        {
            cout << " Sorry " << name << " you not promoted!!!!" << endl;
        }
    }
};
class Developer :public Employee
{
public:
    string favlanguage;
    Developer(string Name, string Company, int Age, string Favlanguage):Employee(Name,Company,Age)
    {
        favlanguage = Favlanguage;
    }
    void fixBug(){
        cout<<"After fixing bug then the fav language of "<<getName() << " is "<<favlanguage <<endl;
    }
    void work()
    {
        cout<<getName() <<" is working in "<<getCompany()<<endl;
    }

};
class Teacher :public Developer{
    public:
    string subject;
    Teacher(string Name, string Company, int Age, string Favlanguage,string Subject):Developer(Name,Company,Age,Favlanguage)
    {
        subject=Subject;
    }
    void TeacherData(){
        cout<<"Teacher Name is : "<< getName() << endl << "age : "<<getAge() << endl << "favorite language : "<<favlanguage<<endl<<"Favorite Subject is : "<<subject<<endl;
    }
    void work()
    {
        cout<<getName() <<" is teaching in "<<getCompany()<<endl;
    }
};

int main()
{
   Employee e=Employee("Lalit","Microsoft",20);
   Developer d=Developer("Lucky","Google",20,"Python");
   Teacher t=Teacher("Anuj-Kumar-pal","SISTec-E",30,"C-language","Data Structures and Algorithms");
   t.TeacherData();
   t.work();
   d.work();
   e.work();
   

}
