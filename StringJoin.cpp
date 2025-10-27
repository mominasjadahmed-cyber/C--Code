/*
Two string  to join the "+" operator
*/

#include<iostream>
#include<cstring>
using namespace std;

class MyString
{
    char s[100];
    public:

    MyString()
    {
        cout<<"Enter the string: "<<s;
        cin>>s;
    }

    MyString operator+(MyString X)
    {
        MyString Answer;
        strcpy(Answer.s,this->s);
        strcat(Answer.s,X.s);
        return Answer;
    }

    void display()
    {
        cout<<"The joined string is: "<<s<<endl;
    }
};
int main()
{
    MyString S1,S2,S3;
    S3=S1+S2;
    S1.display();
    S2.display();
    S3.display();

    return 0;
}