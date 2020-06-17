#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    long long unsigned int a,b,c,d,e,min,max,arr[5],i;

   // printf("Enter the no.\n");
    scanf("%lld %lld %lld %lld %lld" ,&a,&b,&c,&d,&e);
 //   printf("%lld %lld %lld %lld %lld",a,b,c,d,e);

    arr[0] = b+c+d+e;
    arr[1] = a+c+d+e;
    arr[2] = a+b+d+e;
    arr[3] = a+b+c+e;
    arr[4] = a+b+c+d;

    max = arr[0];
    min = arr[0];

    for (i=1; i<=4; i++)
    {
        if (arr[i]>max)
            max=arr[i];
        if (arr[i]<min)
            min=arr[i];
    }

    printf("%lld %lld",min,max);
    return 0;
}

