#include<iostream>
long int numPower(long int num)
{
  long int power=1;
  while(num>9)
  {
      power*=10;
      num/=10;
  }
  return power;
}
using namespace std;
int main()
{
    long int num1,num2,interlaced_number=0,power1=0,power2=0;
    cin>>num1>>num2;
    power1=numPower(num1);
    power2=numPower(num2);
     while(power1!=0&&power2!=0)
     {
     interlaced_number=((interlaced_number*10)+(num1/power1))*10+(num2/power2);
     num1=num1%power1;
     num2=num2%power2;
     power1/=10;
     power2/=10;
     }
     while(power1!=0)
     {
      interlaced_number=interlaced_number*10+num1/power1;
      num1%=10;
      power1/=10;
     }
     while(power2!=0)
     {
         interlaced_number=interlaced_number*10+num2/power2;
         num2%=10;
         power2/=10;
     }
     if(interlaced_number%2==0)
     cout<<interlaced_number*2;
     else
      cout<<interlaced_number*3;
    return 0;
}
