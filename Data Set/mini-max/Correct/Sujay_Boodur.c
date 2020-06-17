#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    long int max,min,temp,a[1000000];
    for(int i=0;i<5;i++)
        scanf("%ld",&a[i]);
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<(4-i);j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }     
        }
    }
    max = a[1]+a[2]+a[3]+a[4];
    min = a[0]+a[1]+a[2]+a[3];
    printf("%ld %ld",min,max);
    return 0;
}
