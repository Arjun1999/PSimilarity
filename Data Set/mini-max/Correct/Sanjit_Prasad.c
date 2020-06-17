#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    unsigned long int arr[5],n=0,x,j,sum;
    while(n<=4)
     {
        j=n;
        scanf("%lu",&x);
            while(j>0&&arr[j-1]>x)
                {
                arr[j]=arr[j-1];
                --j;
            }
        arr[j]=x;
        sum+=x;
        ++n;
     }
    printf("%lu %lu",sum-arr[4],sum-arr[0]);
    return 0;
}
