#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
unsigned long long int sum(unsigned long long int arr[],unsigned long long int i)
    {
    unsigned long long int j,sum=0;
    for(j=0;j<5;j++)
        {
        if(i!=j)
            {
            sum+=arr[j];
        }
    }
    return sum;
}

int main() {
   unsigned long long int *arr = malloc(sizeof(unsigned long long int) * 5);
    unsigned long long int i,max=0,min=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%llu",&arr[arr_i]);
    }
    max=min=sum(arr,i);
    for(i=0;i<5;i++)
        {
       if(sum(arr,i)>max)
           {
           max=sum(arr,i);
       }
        if(sum(arr,i)<min)
            min=sum(arr,i);
       }
    printf("%llu %llu",min,max);
    
    return 0;
}
