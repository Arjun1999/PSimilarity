#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
long calculateSum(int[], int);
int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
    long result;
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
        result=calculateSum(arr,n);
        printf("Sum= %ld\n",result);
    return 0;
}
long calculateSum(int a[], int n)
    {
    static long sum=0;
    if(n==0)
        return sum;
    sum=sum+a[n-1];
    return calculateSum(a, --n);
}
