#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    int i,small,large=0,sum_l=0,sum_s=0;
    for(i = 0; i < 5; i++){
       scanf("%d",&arr[i]);
    }
    small=arr[0];
    for(i=0;i<4;i++)
    {
       large=arr[i]<arr[i+1]?arr[i+1]:arr[i];//to find large no in an array
       //small=arr[i]<arr[i+1]?arr[i]:arr[i+1];//to find small no in an array
       if(arr[i]<small)
           small=arr[i];
    }
    
    for(i=0;i<5;i++)//to find sum of max sum
    {
        if(arr[i]!=small)
        {
           sum_l=sum_l+arr[i];
        }
    }
    for(i=0;i<5;i++)//to find sum of mai sum
    {
        if(arr[i]!=large)
        {
            sum_s=sum_s+arr[i];
        }
    }
    printf("%d %d",sum_s,sum_l);
    return 0;
}
