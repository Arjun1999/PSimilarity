#include<stdio.h>
int main(){
    int i,a[100],sum=0,avg[10],min,max;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    for(i=0;i<5;i++)
    {
        avg[i]=sum-a[i];
    }
    min=max=avg[0];
    if(avg[i]>min)
    {
        min=avg[i];
    }
    if(avg[i]<max)
    {
        max=avg[i];
    }
    printf("%d %d",min,max);
    return 0;
}
