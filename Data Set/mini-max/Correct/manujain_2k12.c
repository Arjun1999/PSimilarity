#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int count1=1,count2=1;
    
   long int *arr = malloc(sizeof(long int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&arr[arr_i]);
        
    }
    long int max=arr[0];
    long int min=arr[0];
    int max1=0,min1=0;
    for(int i=0;i<5;i++)
        {
        if(max<arr[i])
            {
            max=arr[i];
            max1=i;
        }
        
        if(min>arr[i])
            {
            min=arr[i];
            min1=i;
        }
    }
    
    long int sum1=0,sum2=0;
    for(int i=0;i<5;i++)
        {
        if(i!=max1)
            {
            sum1+=arr[i];
        }
        if(i!=min1)
            {
            sum2+=arr[i];
        }
            
    }
    printf("%ld %ld",sum1,sum2);
    return 0;
}
