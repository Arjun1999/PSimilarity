#include<stdio.h>
int main()
{
    int a[5];
    long i,min,max,cmax;
    min=10e9;
    max=0;
    cmax=0;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            cmax=cmax+a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
            //cmin=cmin+a[i];
        }
    }
    printf("%ld %ld",cmax-max,cmax-min);
    return 0;
}