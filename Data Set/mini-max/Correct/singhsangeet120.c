#include<stdio.h>
int main()
{
    long long i,j,max,min,sum=0;
    long long a[5];
    scanf("%lli",&a[0]);
    max=a[0];
        min=a[0];
        sum=a[0];
    for(i=1;i<5;i++)
    {
        scanf("%lli",&a[i]);
        sum+=a[i];
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    printf("%lli %lli",sum-max,sum-min);
    return 0;
}
