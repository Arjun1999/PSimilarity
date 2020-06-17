#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
long int sum(long int,long int,long int,long int);
int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e,t[5],min,max,i;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    t[0]=sum(a,b,c,d);
    t[1]=sum(a,b,c,e);
    t[2]=sum(a,b,e,d);
    t[3]=sum(a,e,c,d);
    t[4]=sum(e,b,c,d);
    max=t[0];
    for(i=1;i<5;i++)
        {
        if(max<t[i])
            max=t[i];
      
    }min=t[0];
    for(i=1;i<5;i++)
        {
        if(min>t[i])
            min=t[i];
      
    }
    printf("%ld %ld",min,max);
    
    return 0;
}
long int sum(long int a,long int b,long int c,long int d)
    {
    return a+b+c+d;
}
