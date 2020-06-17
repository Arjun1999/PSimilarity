
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int i,j,sum[]={0},t,*arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++)
        
       scanf("%d",&arr[arr_i]);
    for(int arr_i = 0; arr_i < 5; arr_i++)
        
        printf("\n %d",arr[arr_i]);
    
    for(i=0;i<5;i++)
    {
        sum[i]=0;
     for(j=0;j<5;j++)
     {    if(j!=i)
         sum[i]=sum[i]+arr[j];
     }
    
     printf("\n%d",sum[i]);
    }
    
   
    return 0;
}
