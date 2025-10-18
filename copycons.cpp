#include<iostream>
using namespace std;

class Data
{
    int a,b;
    public:

    Data()
    {
        cout<<"The default constructor is called"<<endl;
        a=10;
        b=20;

    }

    Data(int a,int b)
    {
        cout<<"Paramatized Constructor called"<<endl;
        this->a=a;
        this->b=b;
        

    }

    Data (Data &D)
    {
        //This copy constructor is none as Deep Copy Constructor
        cout<<"Copy Constructor called"<<endl;
        a=D.a;
        b=D.b;
    }

    void display()
    {
        cout<<endl<<a;
        cout<<endl<<b;
    }

    ~Data()
    {
        cout<<endl<<"Destructor called"<<endl;
    }

};

int main()
{
    Data D1,D2(23,23000),D3=D1,D4=D2;
    D1.display();
    D2.display();
    D3.display();
    D4.display();

    return 0;
}