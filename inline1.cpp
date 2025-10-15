#include<iostream>
using namespace std;

class Arithmatics
{
    int a,b;
    public:

    Arithmatics(int a,int b)
    {
        this->a=a;
        this->b=b;
        cout<<"The value of a: "<<a<<endl;
        cout<<"The value of b:"<<b<<endl;
        cout<<"The constractor is called"<<endl;
    }

    inline void add()
    {
        cout<<"The Addition = "<<a+b<<endl;
    }

    inline void sub()
    {
        cout<<"The sunstraction= "<<a-b<<endl;
    }

    inline void mul()
    {
        cout<<"The multiplication = "<<a*b<<endl;
    }

    inline void div()
    {
        cout<<"The Division = "<<a/b<<endl;
    }

   

};
int main()
{
    Arithmatics  A1(505,10);

    A1.add();
    A1.sub();
    A1.mul();
    A1.div();
   
    return 0;
}