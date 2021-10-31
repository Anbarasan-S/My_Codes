#include<iostream>
#include<cmath>
using namespace std;
class queen
{
private:
int n,k,t,x[50];
public:
void get();
void nqueens(int,int);
int place(int,int);
};
void queen::get()
{
cout<<"\n\t\tNQUEENS PROBLEM.";
cout<<"\nEnter the value for n :";cin>>n;
nqueens(1,n);
}
void queen::nqueens(int k,int n)
{
    cout<<"ks "<<k<<" ";
for(int i=1;i<=n;i++)
{
if(place(k,i))
{
x[k]=i;
if(k==n)
{
cout<<"\n\nThe solution is\n";
for(int j=1;j<=n;j++)
{
cout<<"\n";
cout<<"\n Queen "<<j<<"\t"<<x[j];
}
}
else
{
nqueens(k+1,n);
}
}
}
}
int queen::place(int k,int i)
{
for(int j=1;j<k;j++)
{
if((x[j]==i)||(abs(x[j]-i)==abs(i-k)))
{
return 0;
}
}
return 1;
}
int main()
{
int n;
queen q;
q.get();
}