#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int i,j,temp;
     int min=14,max=0,sum=0;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(i=0;i<5;i++)
    {
        temp=arr[i];
        arr[i]=arr[0];
        arr[0]=temp;
        for(j=1;j<5;j++)
            sum=sum+arr[j];
        if(sum>max)
            max=sum;
        if(sum<min)
            min=sum;
        
        sum=0;
        
    }
    printf("%d %d",min,max);
    
    return 0;
}
