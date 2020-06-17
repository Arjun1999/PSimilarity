#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   long int arr[5];
    long int sum=0;
    long int min,max;
    for(int i=0;i<5;i++){
        scanf("%ld",&arr[i]);
        sum+=arr[i];
        if(i==0){
           min=max=arr[i]; 
        } else{
            if(arr[i]>max)
                max=arr[i];
            if(arr[i]<min)
                min=arr[i];
        }
    }
    printf("%ld ", sum-max);
    printf("%ld ", sum-min);
    
    return 0;
}
