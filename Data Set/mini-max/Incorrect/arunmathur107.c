#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) {
    // Complete this function
    
    
   int p[5],i,j,s,t;
    int max,min;
    
    for(i=0;i<5;i++)
    {   t=(*arr+i);
        *(arr+i)=0;
     s=0;
     
        for(j=0;j<5;j++)
        {
           s=s+ (*(arr+j));
          
            
            
        }
     p[i]=s;
       
        *(arr+i)=t;
    }
  
    max=p[0];
     min=p[0];
     for(i=0;i<5;i++)
     {
        if(p[i]>max) 
         max=p[i];
         
         
         if(p[i]<min)
             min=p[i];
             
         
     }
     
     printf("%d %d",min,max);
    
    
    
    
    
    
    
    
    
    
    
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    return 0;
}
