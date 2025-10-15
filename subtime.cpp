#include<iostream>
using namespace std;

class time
{
    int h,m,s;


    public:

    void readdata()
    {
        cout<<"Enter hour: "<<endl;
        cin>>h;
        cout<<"Enter minute: "<<endl;
        cin>>m;
        cout<<"Enter second: "<<endl;
        cin>>s;

        if(h>24 || h<0 || m>60 || m<0 || s>60 || s<0)
        {
            cout<<"Invalid time"<<endl;
            exit(0);
        }

    }
    void display()
    {
       cout<<"Time is: "<<h<<":"<<m<<":"<<s<<endl;
    }

    void sub(time T1,time T2)
    {
        time R;
        R.s=abs(T1.s-T2.s);
        R.m=abs(T1.m-T2.m)+R.s/60;
        R.h=abs(T1.h-T2.h)+R.m/60;
       
        cout<<"Sub of time is: "<<R.h<<":"<<R.m<<":"<<R.s<<endl;
    }
    
    
};
int main ()
{
    time T1,T2;
    T1.readdata();
    T1.display();

    T2.readdata();
    T2.display();

    T1.sub(T1,T2);
    
    
    return 0;
}