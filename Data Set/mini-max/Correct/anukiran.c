#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
   long int arr[5],sum[5],biggest,smallest;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&arr[arr_i]);
    }
    for(int i=0;i<5;i++)
    {
        sum[i]=0;
        for(int j=0;j<5;j++)
        {
            if(i==j)
            continue;
            sum[i]+=arr[j];
        }
        if(i==0)
        {
            biggest=sum[i];
            smallest=sum[i];
        }
        else if(sum[i]>biggest)
        biggest=sum[i];
        else if(sum[i]<smallest)
        smallest=sum[i];
    }
    printf("%ld %ld",smallest,biggest);
    return 0;
}
