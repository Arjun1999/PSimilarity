#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int sum=0,max,min,a[5]; 
    int i;
    for(i=0;i<5;i++)
    { scanf("%ld",&a[i]);
     sum=sum+a[i];}
    max=a[0];
    for(i=0;i<5;i++)
    {if(max<a[i])
           max=a[i];}
    min=a[0];
        for(i=0;i<5;i++)
    { if(min>a[i])
        min=a[i];}
    printf("%ld",sum-max);
    printf("\t%ld",sum-min);
   
    
    return 0;
}
