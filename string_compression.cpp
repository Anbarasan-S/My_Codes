#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
string itos(int val)
{
    string temp; 
    while(val!=0)
    {
       temp.push_back((val%10)+48);
       val/=10;
    }
    reverse(temp.begin(),temp.end());
    return temp;

}
void stringCompression(string s)
{
    string compressedString="";
    int count=1;
    int i;
    for(i=0;i<s.length()-1;i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
        else
        {
            compressedString+=s[i];
            compressedString+=to_string(count);
            count=1;
        }
    }
     compressedString+=s[i];
     compressedString+=itos(count);
     cout<<compressedString;
}
int main()
{
    string s;
    cin>>s;
    stringCompression(s);
}