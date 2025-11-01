#include<iostream>
using namespace std;

class Number;
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
    
    friend void show(Data O,Number N);
};

class Number
{
    int q;
    protected:
    int f;
    string p;
    

    public:
    string name;

    Number(int q,int f,string p,string name)
    {
        this->q=q;
        this->f=f;
        this->p=p;
        this->name=name;
    }

    void display()
    {
        cout<<"q: "<<q<<endl;
        cout<<"f: "<<f<<endl;
        cout<<"p: "<<p<<endl;
        cout<<"name: "<<name<<endl;
    }


    friend void show(Data O,Number N);

};
void show(Data T,Number E)
{
    cout<<"a: "<<T.a<<endl;
    cout<<"b: "<<T.b<<endl;
    cout<<"w: "<<T.w<<endl;
    cout<<"x: "<<T.x<<endl;
    cout<<"q: "<<E.q<<endl;
    cout<<"f: "<<E.f<<endl;
    cout<<"p: "<<E.p<<endl;
    cout<<"name: "<<E.name<<endl;

}

int main()
{
    Data D(10,20,30,"Hello");
    Number A(70,80,"Ahmed","Asjad");
    show(D,A);
    return 0;
}