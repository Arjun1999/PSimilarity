#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int arr[5]; 
    long int i,j,max,min,k,l,t;
    for(i=0;i<5;i++)
        {
        scanf("%ld",&arr[i]);
        t=t+arr[i];
    }
    max=arr[0];
    for(i=1;i<5;i++)
        {
        if(max<arr[i])
            {
            max=arr[i];
            k=i;
        }
    }
    min=arr[0];
    for(i=1;i<5;i++)
        {
        if(min>arr[i])
            {
            min=arr[i];
            l=i;
        }
    }
    printf("%ld %ld",t-max,t-min);
    return 0;
}
