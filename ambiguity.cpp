#include "iostream"
using namespace std;
class A
{
public:
    void func()
    {
        cout<<"A";
    }
};
class B
{
public:
    void func()
    {
        cout<<"B";
    }
};
class C:public A,public B{

};
int main()
{
    C obj1;
    obj1.A::func();
    obj1.B::func();
}





























//
// Created by 91919 on 31-07-2023.
//
