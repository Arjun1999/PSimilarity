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
    long long int Sum[5];
   
    long long int Max = 4;
    long long int Min = 4000000000;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    Sum[0] = b + c + d + e;
    Sum[1] = a + c + d + e;
    Sum[2] = a + b + d + e;
    Sum[3]=  a + b + c + e;
    Sum[4]=  a + b + c + d; 
    
    
    for ( int i=0;i<5;i++)
        {
         if ( (Sum[i]) > Max)
             Max= Sum[i];
    }
    
      for ( int i=0;i<5;i++)
        {
         if ( (Sum[i]) < Min)
             Min= Sum[i];
    }
    
    printf("%lld %lld\n",Min,Max);
   
    
    return 0;
}
