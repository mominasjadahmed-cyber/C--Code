#include<iostream>
using namespace std;

class ElectricityBill
{
    int con_id,units;
    string con_name;
    float bill_amount;

    public:
    void getdata()
    {
        cout<<"Enter the details of the consumer:"<<endl;
        cout<<"Enter Consumer ID: ";
        cin>>con_id;
        cout<<"Enter Consumer Name: ";
        cin>>con_name;
        cout<<"Enter Units Consumed: ";
        cin>>units;

        cout<<"Electricity Bill Details:";
        if(units<=200)
            bill_amount=150+units*3;
        else if(units<=500)
            bill_amount=750+(units-200)*4;
        else if(units<=1000)
            bill_amount=1950+(units-500)*5;
        else
            bill_amount=4450+(units-1000)*6;
      

    }

    void call()
    {
        cout<<"Consumer ID: "<<con_id<<endl;
        cout<<"Consumer Name: "<<con_name<<endl;
        cout<<"Units Consumed: "<<units<<endl;
        cout<<"Total Bill Amount: "<<bill_amount<<endl;
        cout<<"------------"<<endl;
        cout<<"-------------"<<endl;
       
    }


};

int main()
{
    ElectricityBill e[3];
    for(int i=0;i<3;i++)
    {
        e[i].getdata();
    }
    for(int i=0;i<3;i++)
    {
        e[i].call();
    }

    return 0;
}