#include<bits/stdc++.h>
using namespace std;
int main()
{
    string text,prefix,suffix;
    cin>>text>>prefix>>suffix;
    int j=prefix.length()-1,count=0,maxcount=0,maxcount1=0,sum=0;
    for(int i=text.length()-1;i>=0;i--)
    {
        if(text[i]==prefix[j])
        {
            count++;
            j--;
            if(maxcount<count)
          {
            maxcount=count;
          }
        }
        else
        {
          j=prefix.length()-1;
          count=0;
        }
    }
    sum+=maxcount;
    j=0,count=0;
    for(int i=0;i<text.length();i++)
    {
        if(text[i]==suffix[j])
        {
            count++;
            j++;
            if(maxcount1<count)
           {
               maxcount1=count;
           }
        }
        else
        {
           j=0;
           count=0;
        }
    }
    // cout<<maxcount1<<"skm"<<endl;
    sum+=maxcount1;
    cout<<sum;
}