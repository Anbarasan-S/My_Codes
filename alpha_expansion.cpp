#include<iostream>
using namespace std;
string expand(string);
int main()
{
    string s;
    cin>>s;
   string val= expand(s);
    cout<<val;
}
string expand(string s)
{
    int i=0;
    string words;
    char lastword;
    int num=0;
    while(s[i]!='\0')
    {
        if(s[i]>'0'&&s[i]<'9')
        {
          while(s[i]>='0'&&s[i]<='9'&&s[i]!='\0')
          {
            
            num=num*10+s[i]-'0';
            i++;
          }
          for(int i=0;i<num;i++)
          {
              words.push_back(lastword);
          }
          num=0;
        }
    if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
    {
        lastword=s[i];
    }
    i++;
   }
   return words;
}
