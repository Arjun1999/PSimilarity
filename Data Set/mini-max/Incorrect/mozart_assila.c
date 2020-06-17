#include<stdio.h>
int main()
{
    long int a[5];
    long int min,max;
    for(int k=0;k<5;k++)
    {
        scanf("%ld",&a[k]);
    }
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
                c=a[j];
                a[j]=a[i];
                a[i]=c;
        }
    }
    min=a[0]+a[1]+a[2]+a[3]+a[4];
    max=a[1]+a[2]+a[3]+a[4]+a[5];
    printf("%d %d",min,max);
}

