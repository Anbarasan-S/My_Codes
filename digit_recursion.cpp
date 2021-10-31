#include<iostream>
using namespace std;
int recursion(int num,int i,int arr[])
{
  if(num==0)
  return 0;
  recursion(num/10,arr);
  if(i%2!=0)
  {
      
  }
}
int main()
{
    int num;
    cin>>num;
    int arr[10000];
    int temp=recursion(num,0,arr);
    cout<<arr[0];
}