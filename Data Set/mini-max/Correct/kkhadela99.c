#include<stdio.h>
main()
{
    long long int i,j,a[5],b[5]={0};
    for(i=0;i<5;i++)
    {
        scanf("%lld",&a[i]);
    }
    b[0]=a[1]+a[2]+a[3]+a[4];
    b[1]=a[0]+a[2]+a[3]+a[4];
    b[2]=a[0]+a[1]+a[3]+a[4];
    b[3]=a[0]+a[1]+a[2]+a[4];
    b[4]=a[0]+a[1]+a[2]+a[3];
    long long int min=b[0],max=b[0];
    for(i=1;i<5;i++)
    {
        if(max<b[i])
        {
            max=b[i];
        }
        if(min>b[i])
        {
            min=b[i];
        }
    }
    printf("%lld %lld",min,max);
}