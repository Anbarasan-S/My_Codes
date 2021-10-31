#include<iostream>
using namespace std;
bool isWalking(int num)
{
    int count_difference;
    while(num>9)
    {
      count_difference=((num/10)%10)-(num%10);
      if(count_difference!=1)
      {
          return false;
      }
      num/=10;
    }
    return true;
}
bool isRunning(int num)
{
    int count_difference,prev_count_difference=(num%10)-((num/10)%10);
    while(num>9)
    {
       count_difference=(num%10)-((num/10)%10);
       if(count_difference!=prev_count_difference)
       {
           return false;
       }
       prev_count_difference=count_difference;
       num/=10;
    }
    return true;
}
int main()
{
    int num;
    cin>>num;
    if(isWalking(num))
    {
      cout<<"Walking Number";
    }
    else if(isRunning(num))
    {
        cout<<"Running Number";
    }
    else
    {
        cout<<"Jagged Number";
    }
    return 0;
}
