#include "iostream"
using namespace std;
class A
{
public:

    void func1()
    {
        cout<<"In func1"<<endl;
    }
    void func1(string s)
    {
        cout<<"In func1 "<<s<<endl;
    }
};
int main()
{
    A obj;
    obj.func1("class A");
    obj.func1();
}


























//
// Created by 91919 on 31-07-2023.
//
