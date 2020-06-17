#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long int *sarr=calloc(5,sizeof(long int));
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(int i=0;i<5;i++)
        {
        for(int j=0;j<5;j++)
            {
            if(i!=j)
                sarr[i]=sarr[i]+arr[j];

        }


    }
        long int max=sarr[0],min=sarr[0];
        for(int i=1;i<5;i++)
        {
                if(sarr[i]>max)
                max=sarr[i];
                if(sarr[i]<min)
                min=sarr[i];

        }

                printf("%li ",min);
                printf("%li",max);
    return 0;
}