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

   void display()
   {
        if(imag<0)
            cout<<real<<" - "<<-imag<<" i "<<endl;
        else
             cout<<real<<" + "<<imag<<" i "<<endl;
   }

   Complex operator ++()
   {
        ++this->real;
        ++this->imag;
        return *this;
   }

   Complex operator --()
   {
        --this->real;
        --this->imag;
        return *this;
   } 

   Complex operator ++(int)
   {
        Complex Temp=*this;
        this->real++;
        this->imag++;
        return Temp;

   }

   Complex operator --(int)
   {
        Complex Temp=*this;
        this->real--;
        this->imag--;
        return Temp;

   }

};
int main()
{
    Complex C1(3,4),C2;
    C1.display();
    
    C2=++C1;
    C1.display();

    C2=--C1;
    C1.display();
    cout<<endl;

    C2=C1++;
    C2.display();
    C1.display();

    C2=C1--;
    C2.display();
    C1.display();

    return 0;
}