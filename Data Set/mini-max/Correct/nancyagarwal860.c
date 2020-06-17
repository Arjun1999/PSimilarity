#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
 {
    long int arr[5];
    int i;
    long int max;
    long int sum=0;
    long int min;
    for(i=0;i<5;i++)
      {
        scanf("%ld",&arr[i]);
    }
    max=arr[1];
    min=arr[1];
    for(i=0;i<5;i++)
        {
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    //printf("%ld %ld",min,max);
    for(i=0;i<5;i++)
        {
        sum=sum+arr[i];
    }
   // printf("\n%ld\n",sum);
    long int maximal=sum-min;
    long int minimal=sum-max;
    printf("%ld %ld",minimal,maximal);
    return 0;
}

