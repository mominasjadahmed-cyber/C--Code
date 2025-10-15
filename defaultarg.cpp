#include <iostream>
using namespace std;

class Arithmatic
{
    public:
    int add(int a,int b)
    {
        cout<<"Addition is: "<<a+b<<endl;
    }
    int sub(int a,int b)
    {
        cout<<"Substract is: "<<a-b<<endl;
    }

    int mul(int a,int b)
    {
        cout<<"Mulplication is: "<<a*b<<endl;
    }

    int div(int a,int b)
    {
        if (b==0)
        {
            cout<<"Division by zero is not possible"<<endl;
            return 0;
        }
        cout<<"Division is: "<<a/b<<endl;
    }

};
int main()
{
    Arithmatic obj;
    obj.add(10,20);
    obj.sub(20,10);
    obj.mul(10,20);
    obj.div(10,20);
    obj.div(20,0);

    return 0;
}