#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    int i,j,temp;
    for(i = 0;i < 5;i++)
    {
       scanf("%d",&arr[i]);
    }
    for(j=5;j>0;j--)
    {
        for(i=0;i< j-1;i++)
        {
            if(arr[i] > arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    long int max=0,min=0;
    for(i=0;i<4;i++)
    { 
        min=min+arr[i];
    }
     for(i=4;i>0;i--)
    { 
        max=max+arr[i];
    }
    printf("%ld %ld",min,max);
    
    return 0;
}
