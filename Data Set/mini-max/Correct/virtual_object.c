#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    unsigned long long int a; 
    unsigned long long int b; 
    unsigned long long int c; 
    unsigned long long int d;
    unsigned long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    
    unsigned long long int min,max,temp;
    
    temp=b+c+d+e;
    min=temp;
    max=temp;
    
    temp=a+c+d+e;
    if (temp<min){min=temp;}
    if (temp>max){max=temp;}

    temp=a+b+d+e;
    if (temp<min){min=temp;}
    if (temp>max){max=temp;}    

    temp=a+b+c+e;
    if (temp<min){min=temp;}
    if (temp>max){max=temp;}   

    temp=a+b+c+d;
    if (temp<min){min=temp;}
    if (temp>max){max=temp;}
    
    printf("%lld %lld",min,max); 
    
    return 0;
}
