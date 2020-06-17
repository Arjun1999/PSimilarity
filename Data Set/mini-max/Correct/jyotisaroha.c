#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i, j;
    long int a, t; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long int s[5];
    s[0]=a;
    s[1]=b;
    s[2]=c;
    s[3]=d;
    s[4]=e;
    for(i=0;i<5;i++)
        for(j=i;j<5;j++)
        {
        if(s[i]>s[j])
            {
                t=s[i];
            s[i]=s[j];
            s[j]=t;
        }
    }
    printf("%lld ", s[0]+s[1]+s[2]+s[3]);
    printf("%lld", s[4]+s[1]+s[2]+s[3]);
    //printf("%lls", s);
    
    return 0;
}
