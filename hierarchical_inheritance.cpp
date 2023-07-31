#include "iostream"
using namespace std;
class A
{
public:
    void meth1()
    {
        cout<<"Inside class A"<<endl;
    }
};
class B:public A
{
public:
    void meth2()
    {
        cout<<"Inside class B"<<endl;
    }
};
class C: public A{
public:
    void meth3()
    {
        cout<<"inside class C"<<endl;
    }
};
int main()
{
    A obj1;
    obj1.meth1();
    B obj2;
    obj2.meth2();
    obj2.meth1();
    C obj3;
    obj3.meth3();
    obj3.meth1();
}















//
// Created by 91919 on 30-07-2023.
//
