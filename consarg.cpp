#include<iostream>
using namespace std;

class data 
{
    public:
    void add(const int a,const int b)
    {
        cout<<endl<<"Addition ="<<a+b;
        
    }
};

int main()
{
    data D1;
    D1.add(100,200);
    return 0;
}