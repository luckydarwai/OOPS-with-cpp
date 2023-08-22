#include <iostream>
using namespace std;

class AbstractEmployee
{
  virtual void askForIncreaseSalary() = 0; // Pure Virtual Function
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

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    void askForIncreaseSalary()
    {
        if (age > 25)
        {
            cout << "Congratulations " << name << ", you got promoted!!!!" << endl;
        }
        else
        {
            cout << "Sorry " << name << ", you are not promoted!!!!" << endl;
        }
    }
};

class Developer : public Employee
{
public:
    string favLanguage;
    Developer(string Name, string Company, int Age, string FavLanguage)
        : Employee(Name, Company, Age), favLanguage(FavLanguage)
    {
    }
    void fixBug()
    {
        cout << "After fixing bug, the favorite language of " << getName() << " is " << favLanguage << endl;
    }
};

int main()
{
    Developer lucky = Developer("Lucky", "Google", 20, "Python");
    lucky.fixBug();
    cout << "*****" << endl;
    lucky.askForIncreaseSalary();

    return 0;
}
