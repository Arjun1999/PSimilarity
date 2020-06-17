#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int sum_min;
    long int sum_max;
    long int min;
    long int max;
    int i;
    sum_min = a+b+c+d+e;
    sum_max = a+b+c+d+e;
    min=a;
    max=a;
    long int array[5]={a,b,c,d,e};
    for (i=0;i<5;++i)
    {if (array[i]<min)
        min = array[i];
     if (array[i]>max)
        max = array[i];
    };
    sum_min = sum_min - max;
    sum_max = sum_max - min;
    printf("%ld %ld",sum_min,sum_max);
    return 0;
}
