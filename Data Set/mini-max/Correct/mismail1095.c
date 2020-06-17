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
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int f[10]={a,b,c,d,e};
    long int i,min=f[0],max=f[0],sum=f[0],n;
   // n=strlen(f);
    for(i=1;i<5;i++)
        {
        if(max<f[i]) max=f[i];
        if(min>f[i]) min=f[i];
        sum+=f[i];
    }
    printf("%ld\t%ld",sum-max,sum-min);
    return 0;
}
