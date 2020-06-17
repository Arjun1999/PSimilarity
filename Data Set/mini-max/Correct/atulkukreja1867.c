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
    long int e;
    int i,j;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long long int min,max,temp;
    min = b+c+d+e;
    max = b+c+d+e;
    for(i=1;i<5;i++)
        {
        switch(i){
            case 1: temp = a+c+d+e; break;
            case 2: temp = a+b+d+e; break;
            case 3: temp = a+b+c+e; break;
            case 4: temp = a+b+c+d; break;
            default: break;
        }
        if(min>temp)
            min=temp;
        if(max<temp)
            max=temp;
    }
    printf("%lld %lld",min,max);
    return 0;
}
