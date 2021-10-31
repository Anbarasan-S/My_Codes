#include<iostream>
using namespace std;
int main()
{

    int num,nod=1,tempnum;
    long int power=1;
    cin>>num;
    while(num/power>9)
    {
        power*=10;
        nod++;
    }
    tempnum=num;
    for(int row=0;row<nod;row++,cout<<"\n")
    {
        if(row==nod/2)
        {
           tempnum/=10;
        }
        for(int col=0;col<nod;col++)
        {
            if(row==col)
            {
                cout<<(num/power)%10;
                power/=10;
            }
            else if(row==nod-col-1)
            {

              cout<<tempnum%10;
                tempnum/=10;
            }
            else
            {
                printf(" ");
            }
        }
    }
}
