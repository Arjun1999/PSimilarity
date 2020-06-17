#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int arr[5], i,t, j;
    scanf("%ld %ld %ld %ld %ld",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
   
    for(i=0; i<5; i++)
    {
        for(j=i; j<5; j++)
        {
               if(arr[i]>arr[j]) 
                {
                   t=arr[i];
                   arr[i]=arr[j];
                   arr[j]=t;
               }
        }
    }
    
    long int min=arr[0]+arr[1]+arr[2]+arr[3];
    long int max=arr[1]+arr[2]+arr[3]+arr[4];
    
    printf("%ld %ld",min, max);
    return 0;
}
