#include <iostream>  
using namespace std;  
class Base  
{  
    public:  
    virtual void show() = 0;  
};  
class Derived : public Base  
{  
    public:  
    void show()  
    {  
        std::cout << "Derived class is derived from the base class." << std::endl;  
    }  
};  
int main()  
{  
    Base *bptr;
    Derived d;
    bptr=&d;
    bptr->show();
  
}
    
