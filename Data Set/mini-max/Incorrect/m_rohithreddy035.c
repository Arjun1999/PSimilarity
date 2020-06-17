#include<stdio.h>
int main()
{
    int a[5],f=0,g=0,max,i,t,j;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }max=a[0];
        for(i=0;i<4;i++)
        {
            for(j=0;j<i-1;j++)
        
    {
        if(a[i]>max)
        {
            t=max;
            max=a[i];
            a[i]=t;
        }}
    }for(i=0;i<5;i++){printf("%d",a[i]);}
}
