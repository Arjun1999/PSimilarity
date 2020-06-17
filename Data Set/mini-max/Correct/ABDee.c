#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int arr[100];
    long max,min,sum=0;
    for(int i = 0; i < 5; i++){
       scanf("%d",&arr[i]);
    }
     max=arr[0];
    min=arr[0];
     for(int i = 0; i < 5; i++){
         if(arr[i]>max)
             {
             max=arr[i];
         }
         if(arr[i]<min)
             {
             min=arr[i];
         }
         sum=sum+arr[i];
     }
    printf("%li %li",sum-max,sum-min);
    return 0;
}
