/*
create a class shapes
Define fucntions to calcualte area of
1: circle
2: sqaure
3: rectangle
4: triangle
5: hexagon
use fucntion overloading
*/
#include <iostream>
using namespace std;

class shapes
{
    public:
    void area(float r)
    {
        cout <<"Area of the circle is : "<<3.14*r*r<<endl;
    }

    void area(int a)
    {
        cout <<"Area of the square is : "<<a*a<<endl;
    }

    void area(int l,int b)
    {
        cout <<"Area of the rectangle is : "<<l*b<<endl;
    }
    void area(float b,float h)
    {
        cout <<"Area of the triangle is: "<<0.5*b*h<<endl;
    }

    void area(double a)
    {
        cout <<"Area of the hexagon is : "<<(3*1.732*a*a)/2<<endl;
    }

    void display()
    {
        cout<<"Function Overloading Example"<<endl;
        area(5.0);   //circle
        area(4);   //square
        area(4,6); //rectangle
        area(5.5f,6.5f); //triangle
        area(3);  //hexagon

    }
};
int main()
{
    shapes s1;
    s1.display();
    return 0;
}