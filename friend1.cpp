#include<iostream>
using namespace std;

class Data
{
    int a,b;
    protected:
    string x;

    public:
    int w;
    Data(int a,int b,int w,string x)
    {
        this->a=a;
        this->b=b;
        this->w=w;
        this->x=x;
    }
    
    friend void show(Data O);
};
void show(Data T)
{
    cout<<"a: "<<T.a<<endl;
    cout<<"b: "<<T.b<<endl;
    cout<<"w: "<<T.w<<endl;
    cout<<"x: "<<T.x<<endl;

}

int main()
{
    Data D(10,20,30,"Hello");
    show(D);
    return 0;
}