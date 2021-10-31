#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isTwoThreeFive(long int val)
{
    long int copy=val;
    int digit;
    while(copy)
    {
        digit=copy%10;
        if(digit==2||digit==3||digit==5)
        {
          copy/=10;
        }
        else
        {
            return false;
        }
    }
    return true;
}
/*long int generateTwThFi(long int num)
{
   long int ctr=1,val=1,tempVal;
  while(ctr<=num)
  {
      if(isTwoThreeFive(val))
      {
       ctr++;
       tempVal=val;
       cout<<tempVal<<" ";
      }
      val++;
  }
  return tempVal;
}*/

vector<int> generateTwThFi(int num)
{
    int copy=num,ctr=0,slidePtr=0,temp=0,total=3;
    long int power=10,mul=9;
    vector<int>sequence;
    sequence={2,3,5};
    for(ctr=3;ctr<num;ctr++)
    {
        sequence.push_back(sequence[slidePtr]*power+sequence[temp]);
        if(total==mul)
        {
            power*=10;
            mul*=3;
            temp=0;
            continue;
        }
        if(temp==2)
        {
            slidePtr++;
            temp=0;
            continue;
        }
        temp++;
    }
  for(int i=0;i<num;i++)
  {
      cout<<sequence[i]<<" ";
  }
    return sequence;
}
int main()
{
    long int num;
    int value;
    cin>>num;
    generateTwThFi(num);
    cout<<value;
    return 0;
}
