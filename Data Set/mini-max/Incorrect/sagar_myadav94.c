#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int temp;
    long int sum1=0,sum2=0;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
   for(int i=0;i<5;i++)
   {
       for(int k=0;k<5;k++)
       {
           if(arr[i]>arr[i+1])
           {
               temp=arr[i];
               arr[i]=arr[i+1];
               arr[i+1]=temp;
           }
       }
   }
    for(int i=1;i<5;i++)
    {
        sum1+=arr[i];
    }
   printf("%ld\t",&sum1);
    for(int i=4;i>0;i--)
    {
        sum2+=arr[i];
    }
    printf("%ld",&sum2);
    return 0;
}
