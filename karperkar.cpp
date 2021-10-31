#include<iostream>
using namespace std;
int main()
{
    int num,count_digits=0,power=1,left_part,right_part,ctr,sqr_num;
    cin>>num;
    sqr_num=num*num;
    while(sqr_num/power)
    {
        count_digits++;
        power*=10;
    }
    if(count_digits%2==1)
    {
        count_digits++;
    }
    power=1;
    for(ctr=0;ctr<count_digits;ctr++)
    {
        right_part=sqr_num/power;
        left_part=sqr_num%power;
        power*=10;
        cout<<right_part<<" "<<left_part<<" ";
    if(right_part+left_part==num&&left_part!=0&&right_part!=0)
    {
       cout<<num<<" is a karpekar number ";
       //return 0;
    }
    }
    cout<<num<<" is not a karpekar number ";
    return 0;
}
