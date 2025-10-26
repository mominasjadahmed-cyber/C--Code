/*
Write a class College containing data members as College_Id, College_Name, Establishment_year, University_name,
Write following member functions
Accept details of n colleges
Display College Details of specific university
Display College Details according to specified establishment year
*/

#include<iostream>
using namespace std;

class College
{
    int college_id;
    string college_name;
    int establishment_year;
    string university_name;

    public:

    void details(int n)
    {
        cout<<"Enter details of "<<n<<" colleges: "<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<"Enter College Id: ";
            cin>>college_id;
            cout<<"Enter College Name: ";
            cin>>college_name;
            cout<<"Enter Establishment Year: ";
            cin>>establishment_year;
            cout<<"Enter University Name: ";
            cin>>university_name;
        }
        cout<<endl;
    }

    void display(string university,College c[],int n)
    {
        cout<<"College Details of University: "<<university<<endl;
        for(int i=0;i<n;i++)
        {
            if(university_name == university)
            {
                cout<<" : "<<college_id<<" : "<<college_name<< " : "<<establishment_year<<" : "<<university_name<<endl;
            }
            cout<<endl;
        }
    }

    void display(int year)
    {
        cout<<"College Details established in Year: "<<year<<endl;
        
        if(establishment_year == year)
        {
            cout<<"College Id: "<<college_id<<endl;
            cout<<"College Name: "<<college_name<<endl;
            cout<<"Establishment Year: "<<establishment_year<<endl;
            cout<<"University Name: "<<university_name<<endl;
        }
        cout<<endl;
    }


};
int main()
{
    int n,year;
    string university;
    cout<<"Enter number of colleges: ";
    cin>>n;
    College c[n];

    c[0].details(n);
    cout<<"Enter University Name to display details: ";
    cin>>university;
    for (int i=0;i<n;i++)
    {
        c[i].display(university,c,n);
    }
    cout<<"Enter Establishment Year to display details: ";
    cin>>year;
    for (int i=0;i<n;i++)
    {
        c[i].display(year);
    }


    return 0;
}