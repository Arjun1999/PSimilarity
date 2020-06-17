#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int i,j,n,sum=0,b[100],min=10000,max=0;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                sum=sum+arr[j];
            }
        }
        b[i]=0;
    }
    printf("%d",b[0]);
    for(i=0;i<n;i++)
    {
        if(min>b[i])
        {
            min=b[i];
        }
         if(max<b[i])
        {
            max=b[i];
        }
    }
    printf("%d %d",min,max);

    return 0;
}
