#include<iostream>
using namespace std;

class time
{
    int h,m,s;


    public:

    void readdata()
    {
        cout<<"Enter hour,min,sec: "<<endl;
        cin>>h>>m>>s;

        if(h>24 || h<0 || m>60 || m<0 || s>60 || s<0)
        {
            cout<<"Invalid time"<<endl;
            exit(0);
        }

    }
    void display()
    {
       
    }

    void sum(time T1,time T2)
    {
        time R;
        R.s=T1.s+T2.s;
        R.m=T1.m+T2.m+R.s/60;
        R.h=T1.h+T2.h+R.m/60;
        R.s=R.s%60;
        R.m=R.m%60;
        R.h=R.h%24;
        cout<<"Sum of time is: "<<R.h<<":"<<R.m<<":"<<R.s<<endl;
    }
    
    
};
int main ()
{
    time T1,T2;
    T1.readdata();
    T1.display();

    T2.readdata();
    T2.display();

    T1.sum(T1,T2);
    
    
    return 0;
}