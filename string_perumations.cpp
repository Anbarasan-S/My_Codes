#include<bits/stdc++.h>
using namespace std;
void permutation(char*,int,int);
void swap(char *s,char *t)
{
    char temp=*s;
    *s=*t;
    *t=temp;

}
int main()
{
    
    char s[100];
    cin>>s;
    int l=0,r=strlen(s)-1;
    permutation(s,l,r);
}

void permutation(char *s,int l,int r)
{
    if(l==r)
    {
        cout<<s<<" ";
    }
    else
    {
     for(int i=l;i<=r;i++)
     {
    swap(s+l,s+i);
    permutation(s,l+1,r);
    swap(s+l,s+i);
     }
    }
}