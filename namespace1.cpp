#include<iostream>
using namespace std;
namespace students
{
    int count=500;
};

namespace staff
{
    int count=50;
}
int main()
{
    cout<<endl<<students::count;
    cout<<endl<<staff::count;
    return 0;
}
