#include "iostream"
using namespace std;
class test
{
public:
    int a;
    int b;
    void operator+(test& obj)
    {
        int val1=this->a;
        int val2=obj.a;
        cout<<"Value is: "<<val2-val1<<endl;
    }
};
int main()
{
    test obj1,obj2;
    obj1.a=4;
    obj2.a=11;
    obj1+obj2;
}





















//
// Created by 91919 on 31-07-2023.
//
