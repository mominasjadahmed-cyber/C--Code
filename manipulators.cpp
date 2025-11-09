#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a=10;
    double x=45.3563434;
     cout<<endl<<left<<setw(20)<<setprecision(5)<<setfill('^')<<x;
    
    cout<<endl<<left<<setprecision(4)<<x;
    return 0;
}