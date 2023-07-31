#include "iostream"
using namespace std;
class demo
{
private:
    int roll;
    string name;
    int age;
public:
    int getRoll()
    {
        return this->roll;
    }
    void setRoll(int roll)
    {
        this->roll=roll;
    }
    string getName()
    {
        return this->name;
    }
    void setName(string name)
    {
        this->name=name;
    }


};
int main()
{
    demo d;
    cout<<"print roll no: "<<d.getRoll()<<endl;
    d.setRoll(22);
    cout<<"print roll no: "<<d.getRoll()<<endl;
    cout<<"print name: "<<d.getName()<<endl;
    d.setName("Avita");
    cout<<"print name: "<<d.getName()<<endl;
}



























//
// Created by 91919 on 30-07-2023.
//
