#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long long int *arr = malloc(sizeof(int) * 5);
    for(long long int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%lld",&arr[arr_i]);
    }long long int m[5],i,j,s=0;for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i!=j)
            {
                s=s+arr[j];
            }
        }
        m[i]=s;
        s=0;
    }long long int temp;for(i=0;i<5;i++)
    {
        for(j=(i+1);j<5;j++)
        {
            if(m[i]<m[j])
            {
                temp=m[i];
                m[i]=m[j];
                m[j]=temp;
            }
        }
    }printf("%lld %lld",m[4],m[0]);
    return 0;
}
