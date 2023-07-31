#include "iostream"
using namespace std;
class A
{
public:
    void func1()
    {
        cout<<"Inside class A"<<endl;

    }
};
class B: public A
{
public:
    void func2()
    {
        cout<<"Inside class B"<<endl;

    }
};
class D
{
public:
    void func4()
    {
        cout<<"Inside class D"<<endl;
    }
};
class C: public A, public D
{
public:
    void func3()
    {
        cout<<"Inside class C"<<endl;

    }
};

int main()
{
    C obj1;
    obj1.func1();
    obj1.func3();
    obj1.func4();
    B obj2;
    obj2.func2();
    obj2.func1();

}
























//
// Created by 91919 on 31-07-2023.
//
