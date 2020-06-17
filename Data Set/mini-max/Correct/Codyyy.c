#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e,mi,ma,l[5];
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    l[0]=b+c+d+e;
    l[1]=a+c+d+e;
    l[2]=a+b+d+e;
    l[3]=a+b+c+e;
    l[4]=a+b+c+d;
    ma=l[0];
    mi=l[0];
    for(int i=0;i<5;i++)
        {
        if(ma<l[i])
            ma=l[i];
        if(mi>l[i])
            mi=l[i];
    }
    printf("%ld %ld",mi,ma);
    return 0;
}
