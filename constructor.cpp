#include<iostream>
using namespace std;
class Employee{
public:
    string Name;
    string Company;
    int Age;
    Employee(string name,string company,int age)
    {
        Name=name;
        Company=company;
        Age=age;
    }
    void introduce(){
    cout<<"Name -"<<Name<<endl;
    cout<<"Company -"<<Company<<endl;
    cout<<" Age -"<<Age<<endl;

}

};
int main()
{
    Employee e1("Lucky","Google",20);
    e1.introduce();
}
