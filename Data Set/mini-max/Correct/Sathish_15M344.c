#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
main(){
    long long int a,a1; 
    long long int b,b1; 
    long long int c,c1; 
    long long int d,d1;
    long long int e,e1;
    long long int min,max;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    a1=b+c+d+e;
    b1=a+c+d+e;
    c1=a+b+d+e;
    d1=a+b+c+e;
    e1=a+b+c+d;
    
    if((a1<b1)&&(a1<c1)&&(a1<d1)&&(a1<e1))
    { min=a1;} 
    else if((b1<c1)&&(b1<d1)&&(b1<e1))
    {min=b1;}
        else if((c1<d1)&&(c1<e1))
        {min=c1;}
        else if(d1<e1)
        {min=d1;}
        else
        {
        min=e1;
    }
        if((a1>b1)&&(a1>c1)&&(a1>d1)&&(a1>e1))
        {max=a1;}
    else if((b1>c1)&&(b1>d1)&&(b1>e1))
    {max=b1;}
        else if((c1>d1)&&(c1>e1))
        {max=c1;}
        else if(d1>e1)
        {max=d1;}
        else
        {max=e1;}
        printf("%lld %lld",min,max);
    }
