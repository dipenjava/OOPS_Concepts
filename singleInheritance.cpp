#include "iostream"
using namespace std;
class A
{
public:
    int a;
    int b;
    void aa()
    {
        cout<<"inside class A";
    }
};
class X: public A
{
public:
    int x;
    int y;
    void xx()
    {
        cout<<"inside class X";
    }
};
int main()
{
    X p;
    cout<<p.x<< endl;
    cout<<p.a<<endl;
    p.xx();
    cout<<endl;
    p.aa();


}





























//
// Created by 91919 on 30-07-2023.
//
