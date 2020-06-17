#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5]; 
    long int b; 
    int c; 
    int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    for(c=0;c<5;c++)
        {
        for(d=(c+1);d<5;d++)
            {if(a[c]>a[d]){e=a[c];a[c]=a[d];a[d]=e;}}
    }
    e=0;b=0;
    e=a[1]+a[2]+a[3]+a[4];
    b=a[0]+a[1]+a[2]+a[3];
    printf("%ld %ld",b,e);
    return 0;
}
