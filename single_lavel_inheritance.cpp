// #include <iostream>
// using namespace std;
//  class Account {
//    public:
//    float salary = 60000;
//  };
// class Programmer: public Account {
//    public:
//    float bonus = 5000;
//    };
// int main(void) {
//      Programmer p1;
//      cout<<"Salary: "<<p1.salary<<endl;
//      cout<<"Bonus: "<<p1.bonus<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;
class A
{
private:
    int a = 4;
    int b = 5;

public:
    int mul()
    {
        int c = a * b;
        return c;
    }
};

class B : private A
{
public:
    void display()
    {
        int result = mul();
        std::cout << "Multiplication of a and b is : " << result << std::endl;
    }
};
int main()
{
    B b;
    b.display();

    return 0;
}