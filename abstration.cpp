#include<iostream>
using namespace std;

class AbstractEmployee{
    virtual void askForIncreaceSalary()=0; //Pure Virtual Function
};
class Employee:AbstractEmployee{
    private:
    string name;
    string company;
    int age;
    public:

    Employee(string Name,string Company,int Age){
           name=Name;
           company=Company;
           age=Age;
    }
    void askForIncreaceSalary(){
        if (age>25)
        {
            cout<< " Congratulation "<<name<<" you got promoted!!!!" <<endl;
        }
        else{
            cout<< " Sorry "<<name<<" you not promoted!!!!" <<endl;

        }
    }
};
int main()
{
    Employee e1=Employee("Lucky","Google",30);
    Employee e2=Employee("Lalit","Google",20);
    e1.askForIncreaceSalary();
    e2.askForIncreaceSalary();
}
