#include "iostream"
using namespace std;
class test
{
public:
    int age;
    char garde;
protected:
    int height;
private:
    int sexyrate;
};
class test2: public test
{
public:
    int yes;

int getHeight()
{
    return this->height;
}
};
int main()
{
    test2 t;
    cout<<t.yes<<endl;
    cout<<t.age<<endl;
    cout<<t.getHeight()<<endl;

}



























//
// Created by 91919 on 30-07-2023.
//
