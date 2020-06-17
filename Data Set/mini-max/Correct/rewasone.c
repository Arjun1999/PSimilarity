#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a,suma,ab[1000000],i=0,k,min,max; 
    long int b,sumb; 
    long int c,sumc; 
    long int d,sumd;
    long int e,sume;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    suma=b+c+d+e;
    ab[i]=suma;
    i++;
    sumb=a+c+d+e;
     ab[i]=sumb;
    i++;
    sumc=a+b+d+e;
     ab[i]=sumc;
    i++;
    sumd=a+b+c+e;
     ab[i]=sumd;
    i++;
    sume=a+b+c+d;
     ab[i]=sume;
    max=ab[0];
    min=ab[0];
    for(k=1;k<=i;k++)
   {
        if(max<ab[k])
            max=ab[k];
        if(min>ab[k])
            min=ab[k];
    }
    printf("%ld ",min);
    printf("%ld",max);
    
    return 0;
}
