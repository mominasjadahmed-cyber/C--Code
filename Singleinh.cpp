#include<iostream>
using namespace std;
class Company
{
    int companyid;
    string company_name;

    public:
    Company()
    {
        cout<<endl<<"Enter the company id: ";
        cin>>companyid;
        cout<<endl<<"Enter the company Name: ";
        cin>>company_name;
        
       
    }
    Company(int companyid,string company_name)
    {
         this->companyid= companyid;
         this->company_name=company_name;
    }


    void CompanyDetails()
    {
        cout<<endl<<companyid;
        cout<<endl<<company_name;
    }
};

class Employee:public Company
{
    int eid;
    string ename;
    double salary;
    public:
    Employee():Company()
    {
        cout<<endl<<"Enter the Employee id: ";
        cin>>eid;
        cout<<endl<<"Enter the Empoyee name: ";
        cin>>ename;
        cout<<endl<<"Enter the Empoyee salary: ";
        cin>>salary;
        
        
    }

    Employee(int companyid, string company_name, int eid, string ename,double salary):Company(companyid,company_name)
    {
        this->eid=eid;
        this->ename=ename;
        this->salary=salary;
    }
    void empData()
    {
        cout<<endl<<eid;
        cout<<endl<<ename;
        cout<<endl<<salary;
    }
};

int main()
{
    Employee E1;
    Employee E2(202,"Infosysy",12,"Intekhab",85000);

    E1.CompanyDetails();
    E1.empData();

    E2.CompanyDetails();
    E2.empData();
    return 0;
}