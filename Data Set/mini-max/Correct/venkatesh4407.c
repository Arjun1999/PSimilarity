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
    long int x,y,z,m,k;
    x=b+c+d+e;
    y=a+c+d+e;
    z=a+b+d+e;
    m=a+b+c+e;
    k=a+b+c+d;
    long int max;
    long int min;
    long int s[5]={x,y,z,m,k};
    max=s[0];
    min=s[0];
    for(int i=1;i<5;i++)
    {
        if(max<s[i])
        {   
            max=s[i];
        }
        if(min>s[i])
        {   
            min=s[i];
        }
        
    }
    printf("%ld %ld",min,max);
    
    return 0;
}
