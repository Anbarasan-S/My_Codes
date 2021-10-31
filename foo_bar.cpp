#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
 {
     if(i%15==0)
    {
        cout<<"Foo_Bar ";
    }
    else if(i%3==0)
    {
        cout<<"Foo ";
    }
    else if(i%5==0)
    {
        cout<<"Bar ";
    }
    else
    {
        cout<<i<<" ";
    }
 }
}