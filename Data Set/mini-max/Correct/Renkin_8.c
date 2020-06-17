#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,k,temp;
    int a[5];
    int max=0,min=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(i=0;i<4;i++)
    {
        min = min + a[i];
    }
    for(i=1;i<5;i++)
    {
        max = max + a[i];
    }
    printf("%ld %ld",min,max);
    return 0;
}
