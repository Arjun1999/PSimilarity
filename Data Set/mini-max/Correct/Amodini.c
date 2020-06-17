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
       scanf("%d",&arr[arr_i]);}
        int i,j;
       long int max=0,min=0,t;
        for(i=0;i<4;i++)
            for(j=0;j<5-i-1;j++)
                if(arr[j]>arr[j+1])
                { t=arr[j];
                    arr[j]=arr[j+1];
                     arr[j+1]=t;}
        for(i=0;i<4;i++)
            min=min+arr[i];
        for(i=1;i<5;i++)
            max=max+arr[i];
        printf("%ld %ld",min,max);
    
    return 0;
}
