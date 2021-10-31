#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,count=0;
    cin>>r>>c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i%2==0&&j%2==0)
            {
                count++;
            }
            else if(i%2==1&&j%2==1)
            {
                count++;
            }
        }
    }
    cout<<count;
}