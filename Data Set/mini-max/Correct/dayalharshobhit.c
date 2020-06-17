#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int max;
    long int min;
    long int sum;
    long int i=0;
    long int *arr = malloc(sizeof(long int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&arr[arr_i]);
    }
   while(i<5){
            sum=0;
            for(int j=0;j<5;++j)
            {
                if(i!=j)
                sum=sum+arr[j];
            }
        if(i==0)
        {
            max=sum;
            min=sum;
        }
        if(sum>max)
            max=sum;
        if(sum<min)
            min=sum;
       i++;
       
}
    printf("%ld %ld",min,max);
    return 0;
}

    
