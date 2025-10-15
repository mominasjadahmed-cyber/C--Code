#include<iostream>
using namespace std;

class AI_tools
{
    private:
    string tool_name,model;

    public:
    void set_data()
    {
        cout<<"Enter the tool name: ";
        cin>>tool_name;
        cout<<"Enter the model: ";
        cin>>model;
    }

    void display_data()
    {
        cout<<"Tool name: "<<tool_name<<endl;
        cout<<"Model: "<<model<<endl;
    }
};

int main()
{
    AI_tools obj1,obj2;
    obj1.set_data();
    obj2.set_data();

    obj1.display_data();
    obj2.display_data();
    cout<<"Welcome to c++ programming";
    return 0;
}