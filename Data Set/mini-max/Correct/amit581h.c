#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
   
 
     long int maxs,mins,sum=0;
    long int *arr = malloc(sizeof(long int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&arr[arr_i]);
    }
   long int max=*arr;
    long int min=*arr;
    for(int i=0;i<5;i++)
        {
        if(*(arr+i)>=max)
            max=*(arr+i);
        if(*(arr+i)<=min)
            min=*(arr+i);
    }
    for(int j=0;j<5;j++)
        {
        
       
        sum=sum+*(arr+j);
        
        
    }
    maxs=sum-min;
    mins=sum-max;
    printf("%ld %ld",mins,maxs);
    
    return 0;
}
