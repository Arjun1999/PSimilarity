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
    long int x=a+b+c+d;
    long int y=a+b+c+e;
    long int z=a+b+d+e;
    long int s=a+c+d+e;
    long int t=b+c+d+e;
     if(x<y&&x<z&&x<s&&x<t)
        printf("%ld",x);
    else if(y<x&&y<z&&y<s&&y<t)
        printf("%ld",y);
    else if(z<y&&z<x&&z<s&&z<t)
        printf("%ld",z);
    else if(s<y&&s<z&&s<x&&s<t)
        printf("%ld",s);
    else
        printf("%ld",t); 
        printf(" ");
        
    if(x>y&&x>z&&x>s&&x>t)
        printf("%ld",x);
    else if(y>x&&y>z&&y>s&&y>t)
        printf("%ld",y);
    else if(z>y&&z>x&&z>s&&z>t)
        printf("%ld",z);
    else if(s>y&&s>z&&s>x&&s>t)
        printf("%ld",s);
    else
        printf("%ld",t);
        
        
     
        
    return 0;
}
