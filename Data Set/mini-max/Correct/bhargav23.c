#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5];
    long min,max,sum=0;
    int i;
    for(i=0;i<5;i++)
        scanf("%ld",&a[i]);
    min=a[0];
    max=a[1];
    for(i=0;i<5;i++)
    {
     if(min>a[i])
         min=a[i];
     if(max<a[i])
         max=a[i];
     sum=sum+a[i];
    }
    printf("%ld %ld",sum-max,sum-min);
    
    return 0;
}
