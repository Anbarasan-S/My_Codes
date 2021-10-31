#include<iostream>
#include<cstring>
using  namespace std;
bool removeCharacter(char s1[],char s2[])
{
    int index1=0,index2=0;
    while(index1<strlen(s1))
    {
       if(s1[index1]==s2[index2])
       {
           index1++;
           index2++;
       }
       else
       {
           if(index1!=index2)
           {
               return false;
           }
           index1++;
       }
    }
    return true;
}
bool replaceCharacter(char s1[],char s2[])
{
    int count=0,i=0;
    while(s1[i]!='\0')
    {
        if(s1[i]!=s2[i])
        {
           if(count>0)
           {
               return false;
           }
           count++;
        }
        i++;   
    }
    return true;
}
int main()
{
    char s1[10000];
    char s2[10000];
    cin>>s1>>s2;
    bool val=false;
    if(strlen(s1)-1==strlen(s2))
    {
       val=removeCharacter(s1,s2);
    }
    else if(strlen(s1)+1==<strlen(s2))
    {
        val=removeCharacter(s2,s1);
    }
    else if(strlen(s1)==strlen(s2))
    {
        val=replaceCharacter(s1,s2);
    }
    cout<<val;
}
