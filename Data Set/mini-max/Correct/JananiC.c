#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
 long long int *arr = malloc(sizeof(int) * 5),i,sum=0,min,max,j;
    for(int arr_i = 0; arr_i < 5; arr_i++)
       scanf("%lld",&arr[arr_i]);
    
       // min=arr[0];
        max=arr[0];
        for(i=0;i<5;i++)
         {
            sum=0;
            for(j=0;j<5;j++)
             {
                  if(i!=j)
                    sum=sum+arr[j];
             }
            if(sum>max)
                max=sum;
            if(i==0)
                min=sum;
            else
                {
                if(sum<min)
                min=sum;
            }
           
            
        }
      printf("%lld %lld",min,max);
    return 0;
}
