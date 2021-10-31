#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int Num)
{
    int checkForFactor;
 double  until;
 until = ceil(sqrt(Num));
 for(checkForFactor = 2; checkForFactor <= until;checkForFactor++ )
     if(Num % checkForFactor == 0)
         break;
 if(checkForFactor > until)
 {
    return true;
 }
 else
 {
    return false;
 }
}
int main()
{
    int num,safe;
    long int power=1,tempPower;
    cin>>num;
    safe=num;
    while(num/power>9)
    {
      power*=10;
    }
    do
    {
    num=(num%power)*10+num/power;
    if(isPrime(num))
    {
        continue;
    }
    else
    {
       cout<<safe<<" is not a circular prime because "<<num<<" is not a prime ";
       return 0;
    }
    }while(num!=safe);
    cout<<safe<<" is a circular prime ";
    return 0;
}
