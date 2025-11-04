#include<iostream>
using namespace std;

class Complex
{
    int real,imag;
    public:

    Complex()
    {
        real=0;
        imag=0;
    }
    Complex(int real,int imag)
    {
        this->real=real;
        this->imag=imag;
    }

    friend istream& operator>>(istream &in,Complex &C);
    friend ostream& operator<<(ostream &out,Complex &C);

};

istream& operator>>(istream &in,Complex &C)
{
    cout<<"Enter real and imaginary : ";
    in>>C.real>>C.imag;
    return in;

}
ostream& operator<<(ostream &out,Complex &C)
{
    out<<endl;
    out<<C.real;
    if(C.imag<0)
    {
        out<<C.imag;
    }
    else
    {
        out<<"+";
        out<<C.imag;
    }
    out<<"j";
    return out;

}

int main()
{
    Complex C1(4,3);
    cout<<C1;
    cin>>C1;
    cout<<C1;
    return 0;
}