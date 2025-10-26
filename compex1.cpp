#include<iostream>
using namespace std;

class Complex{
    int real,imag;

    public:
    
    Complex()
    {
        real=0;
        imag=0;
    }
    Complex (int real,int imag)
    {
        this->real=real;
        this->imag=imag;
    }

    void display()
    {
        if(imag<0)
            cout<<real<<imag<<"i"<<endl;
        else
            cout<<real<<"+"<<imag<<"i"<<endl;
    }

    Complex operator +(Complex C1)
    {
        Complex a;
        a.real=real+C1.real;
        a.imag=imag+C1.imag;
    }

};

int main()
{
    Complex C1(3,4),C2(5,-6),C3;

    C3=C1+C2;
    C1.display();
    C2.display();
    C3.display();
    return 0;
}