#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long int getMax(long int* sum)
    {
    long int max=sum[0];
    for(int i=1;i<5;i++)
        {
        if(sum[i]>max)
            {
            max=sum[i];
        }
    }
    return max;
}

long int getMin(long int* sum)
    {
    long int min=sum[0];
    for(int i=1;i<5;i++)
        {
        if(sum[i]<min)
            {
            min=sum[i];
        }
    }
    return min;
}

int main(){
    long int a[5];
    long int sum[5]={0};
    int skip=4;
    scanf("%ld %ld %ld %ld %ld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    for(int i=0;i<5;i++)
        {
        for(int j=0;j<5;j++)
            {
        if(j!=skip)
            {
            sum[i]=sum[i]+a[j];
        }
        }
        skip--;
    }
    printf("%ld ",getMin(sum));
    printf("%ld",getMax(sum));
    return 0;
}


