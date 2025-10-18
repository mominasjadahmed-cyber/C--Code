#include<iostream>
using namespace std;

class Data
{
    int x,y;
    public:

    Data()
    {
        cout<<"The Construct is called"<<endl;
        x=10;
        y=1000;

    }
    Data(int x,int y)
    {
        cout<<"Paramatized Constructor called"<<endl;
        this->x=x;
        this->y=y;
        cout<<endl<<"Addresss of this pointer: "<<this;

    }

    void display()
    {
        cout<<x<<endl;
        cout<<y<<endl;
    }
   
};


int main()
{
    Data D1,D2(100,2000);
    D1.display();
    D2.display();
    
    return 0;

}