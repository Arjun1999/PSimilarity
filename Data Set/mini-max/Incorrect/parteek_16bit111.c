#include<stdio.h>
int main()
{
    int a[10000],i,n,minimum,j,maximum,k,l,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    minimum=999999;
    for(j=0;j<n;j++)
    {
        if(a[j] < minimum)
        {
            minimum=a[j];
        }
    }
    maximum=0;
    for(k=0;k<n;k++)
    {
        if(a[k]>maximum)
        {
            maximum=a[k];
        }
    }
    for(l=0;l<n;l++)
    {
        sum = sum + a[l];
    }
    printf("%d ",maximum);
    printf("%d ",minimum);


}
