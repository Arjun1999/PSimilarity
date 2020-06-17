#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int main()
{
    int a[100],n,i,j;
    int max,min;
    int sum[100],s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    for(i=0;i<n;i++)
    {
       s+=a[i];
    }
    for(i=0;i<n;i++)
    {
        sum[i]=s-a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
         if(sum[i]>sum[j])
         max=sum[i];
         else 
         if(sum[i]<sum[j])
         min=sum[i];  
        }
    }
    printf("%d %d",max,min);
    return 0;
}
