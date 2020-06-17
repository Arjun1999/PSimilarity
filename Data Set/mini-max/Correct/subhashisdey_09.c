#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    int temp;
    long int sum1=0,sum2=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(int i=0; i<5; i++)
        {
        for(int k=0; k<5; k++)
            {
            if(arr[k]>arr[k+1])
                {
                temp=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=temp;
            }
            else
                {
                continue;
            }
        }
    }
    for(int x=0; x<5; x++)
        {
        sum1=sum1+arr[x];
    }
    for(int y=5; y>1; y--)
        {
        sum2=sum2+arr[y];
    }
    printf("%ld %ld",sum1,sum2);
    return 0;
}
