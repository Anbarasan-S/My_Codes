#include<stdio.h>
int main()
{
    int num,val,out_ctr,in_ctr,temp;
    scanf("%d",&num);
    val=((num-1)*3)-1;
    val+=num;
    for(out_ctr=1;out_ctr<=num;out_ctr++,printf("\n"))
    {
        for(in_ctr=1;in_ctr<=num;in_ctr++)
        {
            if(out_ctr==1)
            {
                printf("%02d ",in_ctr+out_ctr-1);
            }
            else if(in_ctr==1)
            {
                printf("%02d ",val--);
            }
            else if(out_ctr==num)
            {
                printf("%02d ",val--);
            }
        }
        for(in_ctr=1;in_ctr<=num*4;in_ctr++)
        {
            printf(" ");
        }
        if(!(out_ctr==num||out_ctr==1))
        {
            printf("%02d ",num+out_ctr-1);
        }
    }
    return 0;
}
