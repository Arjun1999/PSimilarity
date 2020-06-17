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
    long int e,s[5],min,max;
    int i;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
        s[0]=b+c+d+e;
        s[1]=a+c+d+e;
        s[2]=a+b+d+e;
        s[3]=a+b+c+e;
        s[4]=a+b+c+d;
    min=s[0];
    max=s[0];
    for(i=0;i<5;i++)
        {
        if(s[i]<min)
            {
            min=s[i];
        }
        if(s[i]>max)
            {
            max=s[i];
        }
    }
    printf("%ld %ld",min,max);
    
    return 0;
}
