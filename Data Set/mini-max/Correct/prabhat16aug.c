#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int sum,min,max;
    int arr_i,i;
    long int *arr = malloc(sizeof(long int) * 5);
    for(arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&arr[arr_i]);}
     for(i = 0; i < 5;i++)
     {   sum=0;
         int k=1;
         int j=i;
         while(k<5)
         {  
           sum=sum+arr[j];
           k++;
           j++;
           if(j==5)
           j=0;
         }
      if(i==0)
      {
          min=sum;
          max=sum;
      }
      else
      {
          if(sum>max)
           max=sum;
          else if(sum<min)
            min=sum;
      }      
      }
    printf("%ld %ld",min,max);
         return 0;
}
