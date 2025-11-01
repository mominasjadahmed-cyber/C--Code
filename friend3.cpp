#include<iostream>
using namespace std;

class Complex
{
    int real,imag;
    public:

    Complex()
    {
        real=imag=0;
    }
    Complex(int real,int imag)
    {
        this->real=real;
        this->imag=imag;
    }

    void display()
    {
        if(this->imag<0)
            cout<<endl<<this->real<<this->imag<<"j";
        else
            cout<<endl<<this->real<<"+"<<this->imag<<"j";
    }
    friend Complex operator +(Complex T1,Complex T2);
};

Complex operator +(Complex T1,Complex T2)
{
    Complex Answer;
    Answer.real=T1.real+T2.real;
    Answer.imag=T1.imag+T2.imag;
    return Answer;

}
int main()
{
   
    Complex C1(3,4),C2(2,-1),C3;
    C3=C1+C2;
    C1.display();
    C2.display();
    C3.display();
    return 0;
}