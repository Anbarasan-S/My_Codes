#include<iostream>
#include<cmath>
using namespace std;
int returnDigit(int num[],int n)
{
    int power=1,temp=0;
    for(int i=0;i<n;i++)
    {
        temp=(temp*power)+num[i];
        power=10;
    }
    return temp;
}
bool isPrime(int num){
    double until = sqrt(num);
    for(int i=2; i<=until; i++){
        if(num%i == 0){
            return false;
        }
    }
    return true;
}
int main()
{
    int num[100000],temp,power=1,i, n=0,val, j;
    cin>>val;
    while(val/power)
    {
        n++;
        power*=10;
    }
    power/=10;
    for(int i=0;i<n;i++)
    {
      num[i]=(val/power)%10;
      power/=10;
    }
    for (j = 1; j <= n; j++)
    {
    for (i = 0; i < n-1; i++)
    {
            temp = num[i];
            num[i] = num[i+1];
            num[i+1] = temp;
            int combVal = returnDigit(num,n);
            if(isPrime(combVal))
            {
                cout<<val<<" when rotated becomes "<<combVal<<" to form a Prime";
                return 0;
            }
            else
            {
                continue;
            }

	}
    }

    cout<<val<<" cannot make a Prime";

}
