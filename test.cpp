#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"In default constructor";
    }
    A(int j)
    {
        cout<<"In parameterised constructor";
    }
    void show()
    {
        int a=10;
        cout<<a;
    }
};
class B:public A
{
    public:
    B()
    {
        cout<<"In default constructor B";
    }
    B(int i)
    {
        
        cout<<"In parameterised constructor B";
    }
    void show()
    {
        int a=100;
        cout<<a;
    }
};

int main()
{
    B obj(6);
    obj.show();
}