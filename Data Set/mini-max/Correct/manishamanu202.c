#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    
    unsigned long int a[5],sum1=0,sum2=0;
    int max=0,min=0;
    for(int i=0;i<5;i++){
    scanf("%ld",&a[i]);
    }
    max=min=a[0];
    for(int i=1;i<5;i++){
        if(max<a[i])
        max=a[i];
        if(min>a[i])
        min=a[i];
    }

    for(int i=0;i<5;i++){
       if(min<a[i])
           sum1=sum1+a[i];
        if(max>a[i])
            sum2=sum2+a[i];
        }
    if(max==min){
       
        sum2=sum1=4*a[0];
    }
    printf("%ld %ld",sum2,sum1);
    return 0;
}
