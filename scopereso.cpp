#include<iostream>
using namespace std;

int x=10; //Global 
class Example 
{
    public:
    static int x;

};
int Example::x=1000;
int main()
{
    int x=100;
    cout <<endl<<"Global : "<<::x;
    cout<<endl<<"Local: " <<x;
    cout<<endl<<"Static :"<<Example::x;
    return 0;
}