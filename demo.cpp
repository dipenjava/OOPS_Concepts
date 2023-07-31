#include "iostream"
using namespace std;
class Dipen
{
private:
    int sap;
    char grade;
    string name;

public:
    int age;

int getSap()
{
    return sap;
}
void setSap(int h)
{
    sap=h;
}
string getName()
{
    return name;
}
void setName(string n)
{
    name=n;
}
char getGrade()
{
    return grade;
}
void setGrade(char ch)
{
    grade=ch;

}

};
int main()
{
    Dipen hot;
    cout<<"dipen's Sap is: "<<hot.getSap();
    hot.setSap(50097693);
    cout<<endl<<"dipen's New Sap is: "<<hot.getSap();
    cout<<endl<<"Dipen's grade are: "<<hot.getGrade()<<endl;
    hot.setGrade('O');
    cout<<"dipen's new grade  is: "<<hot.getGrade();
    cout<<endl<<"Dipen's name is: "<<hot.getName()<<endl;
    hot.setName("Dipender singh kashyap");
    cout<<"dipen's new name is: "<<hot.getName();
}




















//
// Created by 91919 on 29-07-2023.
//
