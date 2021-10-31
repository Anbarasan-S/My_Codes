#include<iostream>
#include<string>
using namespace std;
int main()
{
   string s="anbarasanhjhjhjhjhjhhijhjhjihhiuhihhhhiuhuihihuhuhiuhuihihiuanbaa";
   int res=s.find("an");
   while(res!=string::npos)
   {
       cout<<res<<" ";
       res=s.find("an",res+1);
   }
}
