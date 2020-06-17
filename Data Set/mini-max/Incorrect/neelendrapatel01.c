#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int min=1,max=1,min1,max1;
    int *arr = malloc(sizeof(int) * 5);
       
    for(int i = 0;  i< 5; i++)
       {
        scanf("%d",&arr[i]);
     
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
            if(arr[i]<min)
            {
                min=arr[i];
            }
        } 
            
       
       }
    
      min1=arr[0]+arr[1]+arr[2]+arr[3]+arr[4]-max;
      max1=arr[0]+arr[1]+arr[2]+arr[3]+arr[4]-min;
      
      printf("%d %d",min1,max1);
    
    
    
    
    return 0;
}
