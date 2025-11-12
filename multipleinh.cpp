#include<iostream>
using namespace std;
class Personal
{
    string name,city;
    public:
    Personal(string name, string city)
    {
        this->city=city;
        this->name=name;
    }

    void displayPersonal()
    {
        cout<<endl<<name<<":"<<city;
    }

};

class Education
{
    string course;
    double cgpa;

    public:
    Education(string course,double cgpa)
    {
        this->cgpa=cgpa;
        this->course=course;
    }

    void displayEducation()
    {
        cout<<endl<<course<<":"<<cgpa;
    }
};

class Skills
{
    string skill;
    int experience;
    public:
    Skills(string skill, int experience)
    {   
        this->skill=skill;
        this->experience=experience;
    }

    void displaySkills()
    {
        cout<<endl<<skill<<":"<<experience;
    }

};

class Prfoile:public Personal, public Education, public Skills
{
    string title;
    public:
    Prfoile(string title,string skill, int experience, string course,double cgpa,string name, string city):Skills(skill,experience),Education(course,cgpa),Personal(name,city)
    {
        this->title=title;
    }

    void display()
    {
        cout<<endl<<title;
        displayPersonal();
        displayEducation();
        displaySkills();
    }
};
int main()
{
    Prfoile P1("MERN Stack Developer","React.js",4,"BE",8.5,"Aakif","Malegaon");
    P1.display();
    return 0;
}