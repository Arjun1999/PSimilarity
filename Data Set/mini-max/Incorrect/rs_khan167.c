#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) {
    // Complete this function
    int i,b[5];
    for(i=0;i<arr_size;i++)
    {
        if(arr[i]<=arr[i+1])
        {
            b[i]=arr[i];
        }
        else
        {
            b[i]=arr[i+1];
        }
        
    }
        int x,y;
        x=(b[0]+b[1]+b[2]+b[3]+b[4]);
        printf("%d",x);
        y=(b[5]+b[1]+b[2]+b[3]+b[4]);
        printf(" %d",y);
}


int main() {
    int *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    return 0;
}
