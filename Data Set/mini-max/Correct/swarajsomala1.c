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
    long long int min,max;
    
        unsigned int s[5];
    s[0]=b+c+d+e;
    s[1]=a+c+d+e;
    s[2]=a+b+d+e;
    s[3]=a+b+c+e;
    s[4]=a+c+b+d;
    min=s[0];
    max=s[0];
        for(int i=0;i<5;i++)
        {

            if(min>s[i])
                min=s[i];
            if(max<s[i])
                max=s[i];
        
         }
   printf("%lld %lld ",min,max);
    return 0;
}
