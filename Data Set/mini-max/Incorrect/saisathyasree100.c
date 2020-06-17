#include<stdio.h>
int main()
{
     int a[100],b[100],n,i,j,s=0,temp,high,low;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
         b[i]=0;
     } 
     for(i=0;i<n;i++)
     {
        s=s+a[i];
     }
    for(i=0;i<n;i++)
    {
        b[i]=s-a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    high=b[n-1];
    low=b[0];
    printf("%d %d",low,high);
    return 0;
}