#include<stdio.h>
int main()
{
    int i,j,k,n,sum=0,max=0,min;
    int a[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     min = a[0];
     for(i=0;i<n-1;i++)
     {
         for(j=i+1;j<n;j++)
         {
             sum=abs(a[i]-a[j]);
             if(max<sum)
             {
                 max = sum;
             }
             if(min>sum)
             {
                 min=sum;
             }
         }
     }
     printf("%d %d",max,min);
     return 0;
}