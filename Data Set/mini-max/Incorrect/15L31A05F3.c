#include<stdio.h>
int main()
{
    int i,a[100];
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
    a[i]=a[i+1]+a[i+2]+a[i+3]+a[i+4];
    a[i+1]=a[i]+a[i+2]+a[i+3]+a[i+4];
    a[i+2]=a[i+1]+a[i]+a[i+3]+a[i+4];
    a[i+3]=a[i+1]+a[i+2]+a[i]+a[i+4];
    a[i+4]=a[i+1]+a[i+2]+a[i+3]+a[i];}
    for(i=0;i<5;i++)
    {
        if(a[i]>a[i+1])
        {
            a[i]=a[i+1];
        }
    }
    printf("%d %d",a[i],a[5-i]);
}