#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

#define min(g,h) (g<h)?g:h
#define max(g,h) (g>h)?g:h

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int min_ele = 0, max_ele = 0, sum = 0;
    
    //min_ele = min(min(min(min(a,b),c),d),e);
    //max_ele = max(max(max(max(a,b),c),d),e);
    
    min_ele = a;
    max_ele =a;
    
    if(min_ele>b)
    {
        min_ele = b;
    }
    
    if(max_ele<b)
    {
        max_ele = b;
    }
    
    if(min_ele>c)
    {
        min_ele = c;
    }
    
    if(max_ele<c)
    {
        max_ele = c;
    }
    
    if(min_ele>d)
    {
        min_ele = d;
    }
    
    if(max_ele<d)
    {
        max_ele = d;
    }
    
    if(min_ele>e)
    {
        min_ele = e;
    }
    
    if(max_ele<e)
    {
        max_ele = e;
    }
   
    //printf("\nMin %lld, Max %lld\n", min_ele, max_ele);
    sum = (a+b+c+d+e);
    
    printf("%lld %lld\n", (sum-max_ele), (sum-min_ele));
    
    return 0;
}
