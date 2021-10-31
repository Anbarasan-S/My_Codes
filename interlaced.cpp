#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int temp1=n1,temp2=n2,arr1[1000],arr2[1000];
    int i=0,j=0;
    while(temp1!=0)
    {
        arr1[i++]=temp1%10;
        temp1/=10;
    }
    while(temp2!=0)
    {
        arr2[j++]=temp2%10;
        temp2/=10;
    }
    temp1=n1,temp2=n2;
    int value=0;
    while(i!=0&&j!=0)
    {
       value=value*10+arr1[--i];
       value=value*10+arr2[--j];
    }
    while(i!=0)
    {
        value=value*10+arr1[--i];
    }
    while(j!=0)
    {
        value=value*10+arr2[--j];
    }
    if(isPrime(value))
    {
        cout<<n1<<" and "<<n2<<" Interlaced "<<value<<" is a Prime Number";
    }
    else
    {
        cout<<n1<<" and "<<n2<<" Interlaced "<<value<<" is Not a Prime Number";

    }
}