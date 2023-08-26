#include <iostream>  
using namespace std;  
class A  
{  
    public:  
    void display()  
    {  
        std::cout << "Class A" << std::endl;  
    }  
};  
class B  
{  
    public:  
    void display()  
    {  
        std::cout << "Class B" << std::endl;  
    }  
};  
class C : public A, public B  
{  
    public:
    void view()  
    {  
        A::display();  
        B::display();  
    }  
};  
int main()  
{  
    B b;   
   b.display();               // Calling the display() function of B class.  
   b.B :: display();       // Calling the display() function defined in B class.  
    return 0;  
}  