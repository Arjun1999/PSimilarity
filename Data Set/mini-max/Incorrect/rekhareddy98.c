#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int i,sum=0,pls=0;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(i=0;i<4;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
    for(i=arr[0];i<5;i++)
    {
        pls=pls+arr[i];
    }
    printf(" %d",pls);
    return 0;
}
