#include "iostream"
using namespace std;
class Animal
{
public:
    void speak()
    {
        cout<<"Speaking muwaah";
    }
};
class Dog: public Animal
{
public:
    void speak()
    {
        cout<<"BArking mwahhhh";
    }
};
int main()
{
    Dog d;
    d.speak();
}












//
// Created by 91919 on 31-07-2023.
//
