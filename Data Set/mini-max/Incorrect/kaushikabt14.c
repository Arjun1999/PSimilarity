#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    int sum=0,sub=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(int i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        {
            sum=sum+arr[i];
        }
        else
        {
            sub=sub+arr[i];
        }
    }
    printf("%d",sum,sub);
    return 0;
}
