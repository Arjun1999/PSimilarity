#include<stdio.h>
int main()
{
    int a,b,c,arr[5];
    long min=0,max=0;
    for(a=0;a<5;a++)
    {
        scanf("%d",&arr[a]);
    }
    for(a=0;a<5;a++)
    {
        for(b=0;b<5-a;b++)
        if(arr[b]>arr[b+1])
        {
            arr[b]=arr[b]^arr[b+1];
            arr[b+1]=arr[b]^arr[b+1];
            arr[b]=arr[b]^arr[b+1];
        }
    }
    min=arr[0]+arr[1]+arr[2]+arr[3];
    max=arr[1]+arr[2]+arr[3]+arr[4];
    printf("%ld %ld",min,max);
    
}
