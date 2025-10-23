#include<iostream>
using namespace std;

class Student
{
    int roll_no,marks[3],total;
    string name;
    float percentage;

    public:
    Student(int roll_no,string name, int marks[])
    {
        this->roll_no=roll_no;
        this->name=name;
        this->total=0;
        for(int i=0;i<3;i++)
        {
            this->marks[i]=marks[i];
            this->total+=marks[i];
        }  

        this->percentage=(total/300.0)*100;
    }

    void display()
    {
        cout<<"Name of the student: "<<name<<endl;
        cout<<"Roll number : "<<roll_no<<endl;
        cout<<"3 subject marks of the student: "<<marks[0]<<" : "<<marks[1]<<" : "<<marks[2]<<endl;
        cout<<"Total marks: "<<total<<endl;
        cout<<"Percentage: "<<percentage<<endl;
    }

    void display(Student X[],int n)
    {
        cout<<endl<<"Details all  Students:";
        for(int i=0;i<n;i++)
        {
            cout<<endl<<"Details of student Number:"<<i+1;
            X[i].display();           
        }
    }

    void display(Student X[], int n, float p)
    {
        cout<<endl<<"Details of all Students with PErcetnage Greater then "<<p;
        for(int i=0;i<n;i++)
        {
            if(X[i].percentage>=p)
                X[i].display();           
        }
    }
    
};
int main()
{
    int a[3]={85,90,95};
    int b[3]={75,80,70};
    int c[3]={65,60,55};

    Student s1(1,"Asjad",a);
    Student s2(2,"Bilal",b);
    Student s3(3,"Mohsin",c);

    Student AllStudents[3]={s1,s2,s3};

    s1.display();
    s1.display(AllStudents,3);
    s1.display(AllStudents,3,75);



    return 0;
}