#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void swap(long long int *a,long long int *b)
    {
    long long int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void selectionsort(long long int arr[],int n)
    {
    int i,j,k;
    for(i=0;i<n-1;i++)
        {
        k=i;
        for(j=i+1;j<n;j++)
            {
            if(arr[j]<arr[k])
                k=j;
        }
        swap(&arr[k],&arr[i]);
    }
}
int main() {
   long long int arr[50],s=0,b[50];
    int i;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%lld",&arr[arr_i]);
    }
    for(i=0;i<5;i++)
        {
        s+=arr[i];
    }
    for(i=0;i<5;i++)
        {
        b[i]=s-arr[i];
    }
    
  selectionsort(b,5);
    printf("%lld %lld",b[0],b[4]);
    return 0;
}

