#include<iostream>
using namespace std;
int main()
{
    int i=1,val=3,n;
    cin>>n;
    if(val<=n)
    {
    cout<<val<<" ";
    }
    while(val<n)
    {
        if(i==1)
        {
            val+=2;
        }
        else if(i==2)
        {
            val+=1;
        }
        else
        {
            val+=3;
        }
        i++;
        cout<<val<<" ";
        if(i==7)
        {
            i=1;
        }
    }
}