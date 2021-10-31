#include<iostream>
using namespace std;
int main()
{
    int num1,num2,safe_num1=0,safe_num2=0,ctr=0,flag1,flag2;
    cin>>num1>>num2;
    safe_num1=num1,safe_num2=num2;
    for(ctr=9;ctr>=0;ctr--)
    {
        flag1=0,flag2=0,num1=safe_num1,num2=safe_num2;
        while(num1!=0)
        {
            if(ctr==num1%10)
            {
                flag1=1;
                break;
            }
            num1/=10;
        }
        while(num2!=0)
        {
            if(ctr==num2%10)
            {
                flag2=1;
                break;
            }
            num2/=10;
        }
        if(flag1!=flag2)
        {
            cout<<"Both numbers are made up of different digits";
            return 0;
        }
    }
    cout<<"Both the numbers are made of same digits";
    return 0;
}
