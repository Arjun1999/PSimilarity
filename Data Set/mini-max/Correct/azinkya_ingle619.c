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
    long long int max,min,f,g,h,i,j;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    f=a+b+c+d;
    g=a+b+c+e;
    h=a+b+e+d;
    i=a+e+c+d;
    j=e+b+c+d;
    if(f==g&&g==h&&h==i&&i==j)
        min=max=i;
    else{
    if(f>=g&&f>=h&&f>=i&&f>=j)
        max=f;
    if(g>=f&&g>=h&&g>=i&&g>=j)
        max=g;
    if(h>=g&&h>=f&&h>=i&&h>=j)
        max=h;
    if(i>=g&&i>=h&&i>=f&&i>=j)
        max=i;
    if(j>=g&&j>=h&&j>=i&&j>=f)
        max=j;
        
        
        if(f<=g&&f<=h&&f<=i&&f<=j)
            min=f;
        if(g<=f&&g<=h&&g<=i&&g<=j)
            min=g;
        if(h<=g&&h<=f&&h<=i&&h<=j)
            min=h;
        if(i<=g&&i<=h&&i<=f&&i<=j)
            min=i;
        if(j<=g&&j<=h&&j<=i&&j<=f)
        min=j;
    }
        printf("%lld %lld",min,max);
        return 0;
}
