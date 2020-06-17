#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void chechAndPrint(long int a[5])
    {
    int n=5;
    long int sum[5] = {0,0,0,0,0}, min, max;
    for(int i=0; i<n; i++)
        {
        for(int j=0; j<n;j++)
            {
            if(i!=j)
                {
                sum[i] += a[j];
            }
        }
    }
    
    min = max = sum[0];
    for(int i=1; i<n; i++)
    {
        if(min>sum[i])
            {
            min = sum[i];
        }
        else if(max<sum[i])
            {
            max = sum[i];
        }
    }
    printf("%ld %ld", min, max);
}

int main(){
    long int a[5];
    scanf("%ld %ld %ld %ld %ld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    chechAndPrint(a);
    return 0;
}
