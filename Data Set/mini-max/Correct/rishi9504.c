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
    long int e,i;
    long int s[5],big,low;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    s[0]=a+b+c+d;
    s[1]=a+b+c+e;
    s[2]=a+b+e+d;
    s[3]=a+e+c+d;
    s[4]=e+b+c+d;
    big=s[0];low=s[0];
for(i=0;i<5;i++)
{
if(s[i]>big)
big=s[i];
else
if(s[i]<low)
low=s[i];
}
    printf("%lld %lld",low,big);
    
    return 0;
}
