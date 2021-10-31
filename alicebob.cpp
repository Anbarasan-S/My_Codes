#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int num,alice_score=0,bob_score=0;
    cin>>num;
    int *arr=new int[num];
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+num,greater<int>());
    for(int i=0;i<num;i++)
    {
        if(i%2==0)
        {
            alice_score+=arr[i];
        }
        else
        {
           bob_score+=arr[i];
        }
    }
    cout<<alice_score-bob_score;
}