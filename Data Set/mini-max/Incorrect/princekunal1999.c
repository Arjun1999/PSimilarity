#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) {
  int a[5];
    int i,j,t,sum=0,p,q;
    for(i=0;i<5;i++)
    // Complete this function
scanf("%d",arr[i]);
    for(i=0;i<arr_size;i++)
    {
        for(j=0;j<arr_size;j++)
        {
        if(a[i]<a[j])
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
 for(i=0;i<5;i++){printf("%d ",a[i]);
 }
   p=sum-a[0];
    q=sum-a[4];
    printf("%d",p);
    printf("%d",q);
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    return 0;
}
