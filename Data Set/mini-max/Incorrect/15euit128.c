#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) {
    // Complete this function
    int sum=0;
    int nn=0;
    int a[5];
    for(int i=0;i<5;i++)
    {
        for(int j=0,nn=0;j!=i,j<5;j++,nn=nn+1)
        {
            sum=sum+arr[j];
            a[nn]=sum;
            //nn=nn+1;
        }
    }
    int max=a[0];
    int min=a[0];
    for(int i=0;i<5;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("%d %d",max,min);
    
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    return 0;
}
