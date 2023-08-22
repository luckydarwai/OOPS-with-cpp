#include<iostream>
// using namespace std;
using std::string;
class Employee{
 public:
   string name;
   int age;
void introduce(){
    std::cout<<"Name -"<<name<<std::endl;
    std::cout<<" age -"<<age<<std::endl;

}
};
int main()
{
    Employee e1;
    e1.name="Lucky";
    e1.age=20;
    e1.introduce();
    
}