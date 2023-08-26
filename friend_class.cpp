// #include <iostream>  
  
// using namespace std;  
  
// class A  
// {  
//     int x =5;  
//     friend class B;           // friend class.  
// };  
// class B  
// {  
//   public:  
//     void display(A &a)  
//     {  
//         cout<<"value of x is : "<<a.x;  
//     }  
// };  
// int main()  
// {  
//     A a;  
//     B b;  
//     b.display(a);  
//     return 0;  
// }  


#include<iostream>
using namespace std;

class Lucky
{
    int age=21;
    friend class Lalit;
};
class Lalit
{
    public:
    void printAge(Lucky &lucky)
    {
        cout<<lucky.age<<endl;
    }
};
int main()
{
    Lalit lalit;
    Lucky lucky;
    lalit.printAge(lucky);
}