#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 6);
    for(int arr_i = 1; arr_i <= 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
  long  int s[6],j,arr_i,sum=0;
   
    
    
    
    for( arr_i = 1; arr_i <= 5; arr_i++){
sum=0;        for(j=1;j<=5;j++)
            {
            if(arr_i!=j)
               sum+=arr[j];
           
        }
      s[arr_i]=sum;
    }
   long int min,max;
     for(arr_i = 1; arr_i <=5; arr_i++){
        min=s[arr_i];
      max=s[5];
         for(j=1;j<=5;j++)
            {
            
     if(s[j]<min)
         {min=s[j];
     }if(s[j]>max)
         max=s[j];
        }
     }
    printf("%ld %ld",min,max);
    
    return 0;
}
