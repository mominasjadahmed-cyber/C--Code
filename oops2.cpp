#include<iostream>
using namespace std;

class Student
{
    private:
    int roll_no,age;
    char name[20],grade;
    float marks[3],total,percent;

    public:
    void read_data()
    {
        cout<<"Enter roll number: ";
        cin>>roll_no;
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter your age: ";
        cin>>age;
        cout<<"Enter 3 subject of marks:  ";
        cin>>marks[0]>>marks[1]>>marks[2];
        total=marks[0]+marks[1]+marks[2];
        percent=total/3;
        if(percent>=75)
            grade='A';
        else if(percent>=60)
            grade='B';
        else if(percent>=50)
            grade='C';
        else if(percent>=35)
            grade='D';
        else
            grade='F';
    }
    void print_data()
    {
        cout<<"Roll number: "<<roll_no<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Total Marks: "<<total<<endl;
        cout<<"Percentage: "<<percent<<endl;
        cout<<"Grade: "<<grade<<endl;

    }

};

int main()
{
    Student s1,s2;
    s1.read_data();
    s2.read_data();

    s1.print_data();
    s2.print_data();
    return 0;
}
