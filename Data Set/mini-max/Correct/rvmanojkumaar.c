#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int i,j,s;
    long  max,min,sum=0;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    s=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j==s)
                continue;
            sum=sum+arr[j];
            
        }
        if(i==0)
            {
                max=sum;
                min=sum;
            }
        s++;
        if(sum>max)
            max=sum;
        if(sum<min)
            min=sum;
        sum=0;
            
    }
    printf("%ld %ld",min,max);
    return 0;
}
