#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int a,b,c,d,e,arr[5],barr[5],min=0,max=0;
    int i,j;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    arr[3]=d;
    arr[4]=e;
    for(i=0;i<5;i++)
        barr[i]=arr[(i+1)%5]+arr[(i+2)%5]+arr[(i+3)%5]+arr[(i+4)%5];
    min=barr[0];
    for(i=0;i<5;i++)
    {
        if(min>barr[i])
            min=barr[i];
        if(max<barr[i])
            max=barr[i];
    }
    printf("%lld %lld",min,max);
}
