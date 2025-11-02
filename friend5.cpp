#include<iostream>
using namespace std;

class Box
{
    int l,w,d;
    public:
    Box()
    {
        l=w=d=1;
    }

    Box(int l,int w,int d)
    {
        this->l=l;
        this->w=w;
        this->d=d;
    }

    void volume()
    {
        cout<<endl<<l*w*d;
    }
    friend Box operator ++(Box &B,int);

};
Box operator ++(Box &B,int)
{

    Box Answer;
    Answer.l=B.l++;
    Answer.w=B.w++;
    Answer.d=B.d++;
    return Answer;
}

    
int main()
{
    Box B1(4,3,2),B2(6,5,4),B3;
    B1.volume();
    B3=B1++;
    B1.volume();
    B3.volume();
    
  
    return 0;
}