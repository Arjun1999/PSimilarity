#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    int t=0,min=0,max=0,i,j,arr_i;
    for(arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
                
            {
                if(arr[j]>arr[j+1])
                {
                    t=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=t;
                }
            }
        }
        for(i=0;i<4;i++)
            min=min+arr[i];
        for(i=1;i<5;i++)
            max=max+arr[i];
        printf("%d %d",min,max);
    
    return 0;
}

