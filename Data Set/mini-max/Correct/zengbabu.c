#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int *arr = malloc(sizeof(long int) * 5);
    for(int i=0;i<5;i++)
        {
            scanf("%ld", &arr[i]);
    }
    
    long int sum = 0;
    for(int i=0;i<5;i++)
        {
            sum = sum + arr[i];
    }
    
    long int *brr = malloc(sizeof(long int) * 5);
    
    for(int i=0;i<5;i++)
        {
            brr[i] = sum - arr[i];
    }
    
    long int p = brr[0];
    for(int i=0;i<5;i++)
        {
            if(p<brr[i])
                {
               p=brr[i];     
            }
    }
    
    long int q = brr[0];
    for(int i=0;i<5;i++)
        {
            if(q>brr[i])
                {
               q=brr[i];     
            }
    }
    printf("%ld %ld", q,p);
    
    return 0;
}
