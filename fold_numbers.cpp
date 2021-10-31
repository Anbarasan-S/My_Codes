#include<iostream>
long int pow(int expo)
{
  long int value=1;
  for(int i=0;i<expo;i++)
  {
      value*=10;
  }
  return value;
}
long int rev(long int num)
{
    long int value=0;
    while(num!=0)
    {
        value=value*10+num%10;
        num/=10;
    }
    return value;
}
using namespace std;
int main()
{
    long int num,safe,res;
    int count_digits=1;
    cin>>num;
    safe=num;
    while(safe>9)
    {
        count_digits++;
        safe/=10;
    }
    safe=num;
    if(count_digits%2==0)
    {
      long int power=pow(count_digits/2);
      res=rev(num/(power))*power+rev(num%(power));
    }
    else
    {
     long int power=pow(count_digits/2+1);
     long int part1=rev(num/power);
     long int part2=(num/(power/10))%10;
     long int part3=rev(num%(power/10));
     res=(part1*10+part2)*(power/10)+part3;
    }
    cout<<res;
    return 0;
}
