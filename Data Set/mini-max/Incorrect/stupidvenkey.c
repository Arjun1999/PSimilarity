#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() 
{
    int *arr = malloc(sizeof(int) * 5),i=-1,sum=0,ref=0,min=-1,max=-1;
  
    for(int arr_i = 0; arr_i < 5; arr_i++)
    {
       scanf("%d",&arr[i]);
    }
    
    while(i<=5)
    {    
        for(;i<=5;)
     {
        if(i!=ref)
        {
            sum=sum+arr[i];
            i++;
        }
        else
        { i++;}
     }  
        ref++;
        if(min<=sum)
            min=sum;
        else
            max=sum;
        
    }
    printf("%d %d",min,max);
    return 0;
}
