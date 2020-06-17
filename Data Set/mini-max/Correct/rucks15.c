#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void findMax(long *sum)
{   
    int i; long temp1,temp;
    long key=sum[0],key1=sum[0];
    for(i=1;i<5;i++)
    {
        if(sum[i]>key)
            key=sum[i];
    }
    for(i=1;i<5;i++)
    {
        if(sum[i]<key1)
            key1=sum[i];
    }
    printf("%ld %ld",key1,key);
}
int main() {
    int i,j;long total=0;
    int *arr = malloc(sizeof(int) * 5);
    long *sum=malloc(sizeof(long)*5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(i=0;i<5;i++)
        {
        for(j=0;j<5;j++)
            {
            if(i!=j)
            total+=arr[j];
        }
        sum[i]=total;
        total=0;
    }
    findMax(sum);
    return 0;
}
