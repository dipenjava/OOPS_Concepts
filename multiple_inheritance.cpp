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
class X
{
public:
    int x;
    int y;
    void xx()
    {
        cout<<"inside class X";
    }
};
class L: public X,public A
{
public:
    int m;
    void mm()
    {
        cout<<"inside class L";
    }
};
int main()
{
    L l;
    l.mm();
    cout<<endl;
    l.xx();
    cout<<endl;
    l.aa();
    cout<<endl;

}















//
// Created by 91919 on 30-07-2023.
//
