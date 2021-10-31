#include<iostream>
using namespace std;
int main()
{
    int hills_number;
    cin>>hills_number;
    int temp=hills_number;
    int i=0,arr[10000];
    while(temp!=0)
    {
      arr[i++]=temp%10;
      temp/=10;
    }
    temp=hills_number;
    while(i--)
    {
        if(i%2==1)
        {
            if(arr[i+1]>arr[i]||arr[i-1]>arr[i])
            {
                cout<<"56471023";
                return 0;
            }
        }
                
    }
    cout<<"36412";
    
}