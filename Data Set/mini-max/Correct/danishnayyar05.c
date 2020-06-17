#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() {
   long long int *arr = malloc(sizeof(long long int) * 5);
    int i;
    long long int min,s,max=0,k;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%lld",&arr[arr_i]);
        s=s+arr[arr_i];
    }min=s;
    for(int arr_i=0;arr_i<5;arr_i++)
{    s=0;
 for(i=0;i<4;i++)
        {
    s=s+arr[i];
    if(i==arr_i)
    {
        k=arr[arr_i];
        arr[arr_i]=arr[4];
            arr[4]=k;
    }
}

if(s>max)
    max=s; 

 if(s<min)
     min=s;
}
    printf("%lld %lld",min,max);
    return 0;
}
