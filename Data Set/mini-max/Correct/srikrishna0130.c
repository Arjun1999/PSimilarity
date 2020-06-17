#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int max(long int *a)
    {
    int i=0;
    long int max;
    for(i=0;i<5;++i)
        {
        if(i==0)
            max=a[i];
        else
            if(max<a[i])
            max=a[i];
    }
    return(max);
}

int min(long int *a)
    {
    int i=0;
    long int min;
    for(i=0;i<5;++i)
        {
        if(i==0)
            min=a[i];
        else
            if(min>a[i])
            min=a[i];
    }
    return(min);
}

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int array[]={a,b,c,d,e};
    long int sum=a+b+c+d+e;
    
    printf("%ld %ld",sum-max(array),sum-min(array));
    
    return 0;
}
