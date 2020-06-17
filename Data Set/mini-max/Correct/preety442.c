#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int sum=0,sum1=0,sum2=0,sum3=0,sum4=0;
    long int larg,small;
    int i;
    long int *arr = malloc(sizeof(int) * 5);
    long int *arr1 = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&arr[arr_i]);
    }
    for(i=0;i<5;i++)
    {
        if(i!=0)
            sum=sum+arr[i];
        if(i!=1)
            sum1=sum1+arr[i];
        if(i!=2)
            sum2=sum2+arr[i];
        if(i!=3)
            sum3=sum3+arr[i];
        if(i!=4)
            sum4=sum4+arr[i];
    }
    arr1[0]=sum;
    arr1[1]=sum1;
    arr1[2]=sum2;
    arr1[3]=sum3;
    arr1[4]=sum4;
    larg=arr1[4];
    small=arr1[0];
    for(i=0;i<5;i++)
    {
        if(arr1[i]<small)
            small=arr1[i];
        
    }
    for(i=0;i<5;i++)
        {
            if(arr1[i]>larg)
                larg=arr1[i];
    }
    printf("%ld %ld",small,larg);
        
    return 0;
}
