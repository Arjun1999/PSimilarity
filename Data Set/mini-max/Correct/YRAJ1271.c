#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5],m,o,t;
    for(int i=0;i<5;i++)
        scanf("%lld",&a[i]);
    for(int j=0;j<5;j++)
        for(int k=0;k<5;k++)
        if(a[j]>a[k])
    {  long int tem=a[j];
     a[j]=a[k];
     a[k]=tem;}
    m=a[0]+a[1]+a[2]+a[3];
    o=a[1]+a[2]+a[3]+a[4];
    printf("%lld %lld",o,m);
    return 0;
}
