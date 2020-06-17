#include<stdio.h>
int main()
{
    int i,j,a[5],temp,sum1,sum2;
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<6;j++)
        {
        if(a[i]<a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    }
    sum1=a[1]+a[2]+a[3]+a[4];
        sum2=a[1]+a[2]+a[3]+a[0];
    printf("\n%d  %d",sum1,sum2);

}