#include<stdio.h>
int main()
{
    int n=5,i,j=5;
    int a[7];
    int large,small;
    int sum[7];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<n;j++)
        {
          if(j!=i)  
          {
              sum[i]=sum[i]+a[i];
          }
        }
        //if(sum[])
    }
    large=small=sum[0];
    for(i=0;i<n;i++)
    {
        if(sum[i]>large)
           {
               large=sum[i];
           }
        if(sum[i]<small)
        {
            small=sum[i];
        }
    }
   return 0;
    
}