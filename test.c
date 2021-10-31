#include <stdio.h>
int main(void)
{
int n,i=1;
scanf("%d",&n);
while(i<=n)
        {
             if(i%3==0&&i%15!=0)
                 {
                     printf("Foo ");
                 }
             else if(i%5==0&&i%15!=0)
                 {
                     printf("Bar ");
                 }
             else if(i%15==0)
                 {
                     printf("Foo_bar ");
                 }
             else
                 {
                     printf("%d ",i);
                 }
           i++;
        }
        return 0;
}