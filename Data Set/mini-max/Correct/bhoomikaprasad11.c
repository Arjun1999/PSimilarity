#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int a[5];
    long long int b[5],big,small,temp;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&a[arr_i]);
    }
    b[0]=a[1]+a[2]+a[3]+a[4];
    b[1]=a[0]+a[2]+a[3]+a[4];
    b[2]=a[1]+a[0]+a[3]+a[4];
    b[3]=a[1]+a[2]+a[0]+a[4];
    b[4]=a[1]+a[2]+a[3]+a[0];
    small=b[0];
    for(int i=1;i<5;i++)
    {
        if(b[i]<small)
        {
            temp=small;
            small=b[i];
            b[i]=temp;
        }
    }
    big=b[0];
    for(int i=1;i<5;i++)
    {
        if(b[i]>big)
        {
            temp=big;
            big=b[i];
            b[i]=temp;
        }
    }
    printf("%lld %lld",small,big);
    
}
