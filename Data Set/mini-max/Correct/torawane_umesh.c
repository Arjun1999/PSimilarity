#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void swap(int *xp, int *yp);

int main() {
    long long int i,j,sum=0,sum1=0;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    
    for (i = 0; i < 5-1; i++)      
 
       // Last i elements are already in place   
       for (j = 0; j < 5-i-1; j++) 
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
    
    for(i=0;i<4;i++)
    {
        sum=sum+arr[i];
    }
    
    for(i=4;i>0;i--)
    {
        sum1=sum1+arr[i];
    }
    
    printf("%lld %lld",sum,sum1);
    return 0;
}

void swap(int *xp, int *yp)
{
    long long int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
