#include<stdio.h>
int main()
{
    int a[10],n,i,smin=0,smax=0;
    printf("Enter n");
    scanf("%d",&n);
   // printf("Enter array values");//
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        smin=smin+a[i];
    }
    for(i=n-1;i>0;i--)
    {
        smax=smax+a[i];
    }
    //printf("Maximum value is:%d\n Minimum value is:%d\n",smin,smax);
    return 0;
}