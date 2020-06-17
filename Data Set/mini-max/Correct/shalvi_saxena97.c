#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int i,j;
    long int a[5],b[5],max=LONG_MIN, min=LONG_MAX,sum=0;
    scanf("%ld %ld %ld %ld %ld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    int n=5;
    while(n--)
    {
        sum=0;
        int t=a[0];
    for(i=0; i<4; i++)
    {
        sum+=a[i];
        a[i]=a[i+1];
    }
        a[4]=t;
        min= sum<min? sum:min;
        max= sum>max? sum:max;
      //  printf("min=%ld\tmax=%ld\tsum=%ld\n",min,max,sum);
    }
    printf("%ld %ld",min,max);
    return 0;
}
