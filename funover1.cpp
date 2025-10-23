/*
Function Overloading means
1: Creating many functions with "same name" but "different signatures"
signature
    1: Number of Arguments
    2: Type of arguments
    3: Order Arguments
2: try to avoid the sue of default arguments in overloaded functions
3: The return type has no role in overloading
*/
#include<iostream>
using namespace std;

class Data 
{
    int a,b;
    public:
    Data()
    {
        a=10;
        b=20;

    } 

    void display()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
    void display(int x)
    {
        cout<<"x="<<x<<endl;
    }

    void display(int x,int y)
    {
        cout<<"x+a="<<x+a<<endl;
        cout<<"y+b="<<y+b<<endl;
    }
};

int main()
{
    Data D1;
    D1.display();
    D1.display(100);
    D1.display(200,300);

}