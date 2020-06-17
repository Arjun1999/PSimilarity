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
    long int x1,x2,x3,x4,x5,max,min;
    x1=a+b+c+d;
    x2=a+b+d+e;
    x3=a+c+d+e;
    x4=a+b+c+e;
    x5=b+c+d+e;
    if(x1>x2)
    {
        if(x2>x3)
        max=x1;
        else
        {
            if(x1>x3)
            max=x1;
            else
            max=x3;
        }
        
    }
    else
    {
        if(x2>x3)
        max=x2;
        else
        max=x3;
    }
     if(x1<x2)
    {
        if(x2<x3)
        min=x1;
        else
        {
            if(x1<x3)
            min=x1;
            else
            min=x3;
        }
        
    }
    else
    {
        if(x2<x3)
        min=x2;
        else
        min=x3;
    }
    long int f,g;
    f=max;
    g=min;
     if(f>x4)
    {
        if(x4>x5)
        max=f;
        else
        {
            if(f>x5)
            max=f;
            else
            max=x5;
        }
        
    }
    else
    {
        if(x4>x5)
        max=x4;
        else
        max=x5;
    }
     if(g<x4)
    {
        if(x4<x5)
        min=g;
        else
        {
            if(g<x5)
            min=g;
            else
            min=x5;
        }
        
    }
    else
    {
        if(x4<x5)
        min=x4;
        else
        min=x5;
    }
    printf("%ld %ld",min,max);
    
    
    
    return 0;
}
