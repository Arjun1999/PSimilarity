#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) {
    int i,j,t,sum1=0,sum2=0;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr_j<arr_i)
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    for(i=0;i<4;i++)
        sum1=sum1+arr_i;
    printf("%d\t",sum1);
for(i=1;i<5;i++)
        sum2=sum2+arr_i;
    printf("%d",sum2);
}
int main() {
    int *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    return 0;
}
