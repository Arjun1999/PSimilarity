#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5]; 
    long int b[5]; 
    scanf("%ld %ld %ld %ld %ld",&a[0],&a[1],&a[2],&a[3],&a[4]);
   long long int sum = a[0] +a[1] + a[2] + a[3] + a[4];
    for(int i =0 ; i<5 ; i++)
        {
            b[i] = sum - a[i];
    }
   long long int min=b[0];
    for(int i =0 ; i<5 ; i++)
        {
            if(min > b[i])
        min= b[i];
    }
     long long int max=b[0];
    for(int i =0 ; i<5 ; i++)
        {
            if(max < b[i])
        max= b[i];
    }
    printf("%lld %lld",min,max);
    return 0;
}
