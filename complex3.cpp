/*
Create a program add 2 circle areas by using operator overloading.
*/
#include<iostream>
using namespace std;

class Circle
{
    int radius;
    float area;
    public:
    Circle()
    {
        radius=0;
        area=0.0;
    }

    Circle(int r)
    {
        radius=r;
        area=3.14*r*r;
    }

    Circle operator +(Circle C)
    {
        Circle Temp;
        Temp.area=this->area + C.area;
        return Temp;
    }

    void display()
    {
        cout<<"radius of Circle: "<<radius<<endl;
        cout<<"Area of Circle: "<<area<<endl;
    }


};

int main()
{
    Circle C1(5);
    Circle C2(10);
    Circle C3;
    C3=C1+C2;
    C3.display();

    return 0;
}