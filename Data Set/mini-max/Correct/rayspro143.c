#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int i,j,a[5],temp,k,max=0,min=0;
    for(i=0;i<5;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=1;i<5;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[j]>a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(k=0;k<4;k++)
    {
        min=min+a[k];
    }
    for(k=4;k>0;k--)
    {
        max=max+a[k];
    }
    printf("%ld %ld",min,max);
    return 0;
}
