#include<stdio.h>
int main(void)
{
     int a[100],n,ma=0,mi=0,sum_min=0,sum_max=0;
     int max,min;
    int i;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
        ma=i;
    else if(a[i]<min)
        min=a[i];
        mi=i;
    }
    for(i=0;i<n;i++)
    {
        if(i!=mi)
        sum_max+=a[i];
        else if(i!=ma)
        sum_min+=a[i];
    }
    printf("%d %d",sum_min,sum_max);
    return 0;
}
    



