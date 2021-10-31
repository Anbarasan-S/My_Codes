#include<iostream>
using namespace std;
int isPalindrome(int num)
{
    int safeNum=num,revNum=0;
    while(num!=0)
    {
        revNum=revNum*10+num%10;
        num/=10;
    }
    if(safeNum==revNum)
        return true;
    else
        return false;
}
int main()
{
    int num;
    cin>>num;
    if(isPalindrome(num))
    {
        cout<<"Palindromic Number";
    }
    else
    {
        cout<<"Not a Palindromic Number";
    }
    return 0;
}
