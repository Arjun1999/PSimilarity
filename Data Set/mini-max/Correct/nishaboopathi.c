#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
   long int i,j,min,t,s=0;
    min=arr[0];
    
    for(i=0;i<5;i++)
        {
        for(j=0;j<4;j++)
         if(arr[j]>arr[j+1])
             {
              t=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=t;
             }
        }
    
    for(i=0;i<4;i++)
        {
         s=s+arr[i];
        }
    printf("%ld",s);
    
    printf(" ");
    s=0;
    for(i=1;i<5;i++)
        {
         s=s+arr[i];
        }
    printf("%ld",s);
    return 0;
}
