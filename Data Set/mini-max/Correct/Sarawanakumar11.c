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
    
    long int n[5] = {b+c+d+e,a+c+d+e,a+b+d+e,a+b+c+e,a+b+c+d};
   
    long int max = n[0];
    long int min = n[0];
    int i;
    
    
    for(i=1; i<5; i++)
    {
        if(n[i]>max)
        {
            max = n[i];
        }
 
        if(n[i]<min)
        {
            min = n[i];
        }
    }
 
    printf("%ld %ld", min, max);
    
    return 0;
}
