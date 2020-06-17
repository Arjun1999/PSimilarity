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
    long int sum=0;
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<5;i++)
        {
        sum=sum+(long int)arr[i];
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
       
    }
    long int summax=sum-(long int)min;
    long int summin=sum-(long int)max;
    printf("%ld %ld",summin,summax);
    return 0;
}
