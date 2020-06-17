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
    long int max=0, min=0 , index=0,temp=0;
    for(int i=0;i<4;i++)
        max+=arr[i];
    min=max;
    
    for(int i=0; i<5;i++)
    {
        for(int i=0;i<5;i++)
        {
         if(i!=index)   
         {
              temp+=arr[i];
         }
           
        }
       if(temp>max)
       {max=temp;}
        
       if(temp<min)
        {min=temp;}
         index++;
        temp=0;
    }
    
    printf("%ld %ld",min,max);
    return 0;
}
