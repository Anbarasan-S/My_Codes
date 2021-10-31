#include<stdio.h>
#include<string.h>
int main()
{
    char string[10000];
    scanf("%s",string);
    int count[200]={0};
    int checked[200]={0};
    for(int i=0;i<strlen(string);i++)
    {
        char c=string[i];
      count[c]++;
    }
    for(int i=0;i<strlen(string);i++)
    {
        char c=string[i];
        if(checked[c]==0)
        {
            printf("%c%d\n",c,count[c]);
            checked[c]=1;
        }
    }
}