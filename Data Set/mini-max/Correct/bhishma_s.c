#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
 unsigned long int *arr = malloc(sizeof(int) * 5);
    unsigned long int i,j,sum=0,min=100000000000,max=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%lu",&arr[arr_i]);
    }
    for(i=0;i<5;i++)
    {
        sum=0;
        for(j=0;j<5;j++)
        {
            if(j!=i)
                sum=sum+arr[j];
        }    
        if(max<sum)
            max=sum;
        if(min>sum)
            min=sum;
    }
    printf("%lu %lu",min,max);
    return 0;
}
