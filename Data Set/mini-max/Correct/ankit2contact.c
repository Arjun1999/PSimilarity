#include<stdio.h>
int main()
{
   
   long int a[5],min,max=0,j,i,sum[5]={0};
    for(i=0;i<5;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i!=j)
                sum[i]=sum[i]+a[j];
            
        }
    }
    min=sum[0];
    for(i=0;i<5;i++)
    {
        if (max<sum[i])
            max=sum[i];
        if(min>sum[i])
            min=sum[i];
    }
    
    printf("%ld %ld",min,max);
}