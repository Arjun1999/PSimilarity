#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int arraySum(int arr[],int n)
    {
    int j;
    int s=0;
    for(j=0;j<n;j++)
        {
        s=s+arr[j];
    }
    return s;
}

int main(){
    int n; 
    int sum;
    scanf("%d",&n);
    int arr[100];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    sum=arraySum(arr,n);
    printf("%d",sum);
    return 0;
}
