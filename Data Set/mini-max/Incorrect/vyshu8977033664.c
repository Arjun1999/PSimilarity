#include<stdio.h>
#include<stdlib.h>
int main()
{
    int max,min,sum=0,n,a[6],t,i,j;
    //printf("enter array elements");
    for (i=0;i<=n;i++)
    scanf("%d",&a[i]);
    for (i=0;i<=n;i++)
    {
        for (j=0;j<n-i-1;j++)
        {
            if (a[i]>a[j+1])
            {
                t=a[i];
                a[i]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    max=a[0];
    for (i=0;i<n;i++)
    {
        sum+=a[i];
    }
    max=sum;
    min=a[0];
    for (i=0;i<n;i++)
    {
        sum+=a[i];
    }
    min=sum;
}