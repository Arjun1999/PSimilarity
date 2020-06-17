#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int arr[5];
    long int  a,b,t,k=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
        k=k+arr[arr_i];
    }
   for(int i=0;i<4;i++)
      { for(int j=0;j<4-i;j++)
       {if(arr[j]>arr[j+1])
         { t=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=t;
       }}
      }
    a=k-arr[4];
    b=k-arr[0];
    printf("%ld %ld",a,b);
        
    
    return 0;
}
