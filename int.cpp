#include<iostream>
using namespace std;
 string temp;
    void recursion(string s,int i)
    {
        for(int j=i;j<s.length();j++)
        {
            if(s[i]=='.')
            {

                recursion(s,j);
            }
            temp.push_back(s[j]);
        }
    }
int main()
{
    recursion("i.like.this",0);
    cout<<temp;
    return 0;
}