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
    
    int i,j,a;
    for (i = 0; i < 5; ++i)
    {
       for (j = i + 1; j < 5; ++j)
       {           
           if (arr[i] > arr[j])
           {
               a =  arr[i];
               arr[i] = arr[j];
               arr[j] = a;
           }
       }
    }
    
/*for(i=0;i<5;i++)
        {
        printf("%d",arr[i]);
    }*/
    long int min=0;
    long int max=0;
    for(i=0;i<4;i++)
        {
        min = min+arr[i];
    }
     for(i=1;i<5;i++)
        {
        max = max+arr[i];
    }
    printf("%ld ",min);
    printf("%ld",max);
    return 0;
}
