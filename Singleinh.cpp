#include<iostream>
using namespace std;

class Company
{
    int companyid;
    string company_name;

    public:
    Company()
    {
        cout<<companyid;
        cout<<endl<<company_name;
    }

    void CompanyDetails()
    {
        companyid=11;
        company_name="TCS";
    }
};

class Employee:public Company
{
    int Employee_id;
    string E_name;
    double salary;

    public:
    Employee():Company()
    {
        Employee_id=1;
        E_name="Abdullah";
        salary=65000;
    }

    void EmployeeDetail()
    {
        cout<<endl<<Employee_id;
        cout<<endl<<E_name;
        cout<<endl<<salary;
    }
};
int main()
{
    Employee E1;
    E1.CompanyDetails();
    E1.EmployeeDetail();

    
    return 0;
}