#include<stdio.h>
int main()
{
     int ar[5],i,sum[5],highest,lowest,j;
    for(i=0;i<5;i++)
       scanf("%d",&ar[i]);
    for(j=0;j<5;j++)
    {sum[j]=0;
     int counter=0;
        for(i=j;counter<4;i++)
        {if(i!=5)
            sum[j]+=ar[i];
         else if(i==5)
             i=0;
         counter++;
        }}
        lowest=highest=sum[0];
    for(i=0;i<5;i++)
    {if(sum[i]<lowest)
            lowest=sum[i];
    else if(sum[i]>highest)
        highest=sum[i];}
    printf("%d %d",lowest,highest);
    return 0;
}