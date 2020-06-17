#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long int temp[5],min=0,max=0,s=0;
    int i,k=0,l=0;
    for(int i = 0; i < 5; i++){
       scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
        s=s+arr[i];
        for(i=0;i<5;i++)
            temp[k++]=s-arr[i];
    
            min=max=temp[0];
            
            for(i=0;i<5;i++)
                {
                if(temp[i]>max)
                max=temp[i];
                if(temp[i]<min)
                min=temp[i];
                }
    printf("%ld %ld",min,max);
    return 0;
}
