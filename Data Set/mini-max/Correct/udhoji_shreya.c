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
    long int array[5];
    long int max, min, sum;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    array[0]=a; array[1]=b; array[2]=c; array[3]=d; array[4]=e;
    sum = a + b + c + d + e;
    max = array[0];
    min = array[0];
    for(int i=0; i<5; i++)
    {
        if(array[i]>max)
            max = array[i];
        if(array[i]<min)
            min = array[i];
    }
    printf("%lld %lld", sum-max, sum-min);
    return 0;
}
