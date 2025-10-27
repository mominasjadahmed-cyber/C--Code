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
        if(imag>=0)
            cout<<real<<" + " <<imag<<"i"<<endl;
        else
            cout<<real<<" - "<<imag<<"i"<< endl;
    }

    Complex operator *(Complex C1)
    {
        Complex Answer;
        Answer.real=(this->real*C1.real)-(this->imag*C1.imag);
        Answer.imag=(this->real*C1.imag)+(this->imag*C1.real);
        return Answer;
        
    }

};

int main()
{
    Complex C1(3,5),C2(2,7),C3;
    C3=C1*C2;
    C1.display();
    C2.display();
    C3.display();
    
    return 0;
}