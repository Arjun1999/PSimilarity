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
    long int sum[5];
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    sum[0] = b + c + d + e;
    sum[1] = a + c + d + e;
    sum[2] = a + b + d + e;
    sum[3] = a + b + c + e;
    sum[4] = a + b + c + d;
    long int minimum = sum[0];
    for(int i=1;i<5;i++)
        {
        if (sum[i] < minimum)
            {
            minimum = sum[i];
        }
    }
    long int maximum= sum[0];
    for(int i=1;i<5;i++)
        {
        if (sum[i] > maximum)
            {
            maximum = sum[i];
        }
    }
    
    printf("%ld %ld", minimum, maximum);
}
