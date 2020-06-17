#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int max=0,min=99999999999999,temp=0;
    temp=b+c+d+e;
    if(max<temp)
      max=temp;
    if (min>temp)
        min=temp;
    
        temp=a+c+d+e;
    if(max<temp)
      max=temp;
    if (min>temp)
        min=temp;
        
        temp=a+b+d+e;
    if(max<temp)
      max=temp;
    if (min>temp)
        min=temp;
        
        temp=a+b+c+e;
    if(max<temp)
      max=temp;
    if (min>temp)
        min=temp;
        
        temp=a+b+c+d;
    if(max<temp)
      max=temp;
    if (min>temp)
        min=temp;
    
    
    
    printf("%lld %lld",min,max);
    
    return 0;
}
