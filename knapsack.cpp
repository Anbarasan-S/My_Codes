#include<iostream>
using namespace std;
class Knapsack
{
    float weight[100],profit[100],ld[100],value[100],capacity;
    int num;
    public:
        void getData();
        void display();
        void knaps();
        void sort();
};
void Knapsack::getData()
{
  cout<<"Enter the number of items";
  cin>>num;
  for(int ind=0;ind<num;ind++)
  {
      cout<<"Enter the weight: ";
      cin>>weight[ind];
      cout<<"Enter the profit: ";
      cin>>profit[ind];
      value[ind]=profit[ind]/weight[ind];
  }
  cout<<"Enter the capcity of the knapsack: ";
  cin>>capacity;
}
void Knapsack::knaps()
{
  for(int ind=0;ind<num;ind++)
  {
      if(capacity>=weight[ind])
      {
       ld[ind]=1;
       capacity=capacity-weight[ind];
      }
      else
      {
          ld[ind]=capacity/weight[ind];
          break;
      }
  }
}
void Knapsack::display()
{
    cout<<"Weight\tProfit\tLoad\n";
    for(int ind=0;ind<num;ind++)
    {
        cout<<weight[ind]<<"\t"<<profit[ind]*ld[ind]<<"\t"<<ld[ind]<<"\n";
    }
}
void Knapsack::sort()
{
    for(int ind=0;ind<num-1;ind++)
    {
        for(int j=0;j<num-ind-1;j++)
        {
          if(value[j]<value[j+1])
          {
            float tempprofit=profit[j+1];
            float tempweight=weight[j+1];
            float tempvalue=value[j+1];
            profit[j+1]=profit[j];
            weight[j+1]=weight[j];
            profit[j]=tempprofit;
            weight[j]=tempweight;
            value[j+1]=value[j];
            value[j]=tempvalue;
          }
        }                              
    }
    cout<<"Profit\tWeight\tRatio\n";
    for(int ind=0;ind<num;ind++)
    {
        cout<<profit[ind]<<"\t"<<weight[ind]<<"\t"<<value[ind]<<"\n";
    }
}
int main()
{
   Knapsack knpsck;
   knpsck.getData();
   knpsck.sort();
   knpsck.knaps();
   knpsck.display();
}