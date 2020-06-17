#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5];
    scanf("%ld %ld %ld %ld %ld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    long int max=a[0],min=a[0];
    for(int i=1;i<5;i++)
    {
    if(max<a[i])    max=a[i];
    if(min>a[i])    min=a[i];    
    }
    long int sum=a[0]+a[1]+a[2]+a[3]+a[4]+a[5];
    long int jeden=sum-max;
    long int dwa=sum-min;
    printf("%ld %ld", jeden,dwa);
    return 0;
}
