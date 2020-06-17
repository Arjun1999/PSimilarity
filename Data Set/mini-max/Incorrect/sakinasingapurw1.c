#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int large,small,pos1,pos2,sum_max=0,sum_min=0;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
      large = small =arr_0;
        int i=0;
        while(i<5)
        {
            if(arr_i>large)
        {
            large= arr_i;
                pos1=i;
         i++;
        }
           i=0;
             while(i<5)
        {
            if(arr_i<small)
        {
            small= arr_i;
                pos2=i;
         i++;
        }
          i=0;
                 while(i<5)
                 {
                     if(i!=pos1)
                         sum_max=sum_max+arr_i;
                     else
                         continue;
                
                     
                 }
                     i=0;
                 while(i<5)
                 {
                     if(i!=pos2)
                         sum_min=sum_min+arr_i;
                     else
                         continue;
                
                     
                 }
                 printf("%d %d",sum_max,sum_min);
            
          
            
    }
    }
    return 0;
}
