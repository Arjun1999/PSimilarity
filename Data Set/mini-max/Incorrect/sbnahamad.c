#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long sum1=0,sum2=0;
    int *arr = malloc(sizeof(int) * 5);
    for(int i = 0; i < 5; i++){
       scanf("%d",&arr[i]);
    }
    for(int i=0;i<5-1;i++)
    {
        sum1=sum1+*arr+i;
    }
    for(int i=1;i<5;i++)
    {
        sum2=sum2+*arr+i;
    }
    printf("%ld %ld",sum1,sum2);
    return 0;
}
