#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a,max=0,min; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int array[5]={a+b+c+d,b+c+d+e,a+c+d+e,a+b+c+e,a+b+d+e};
    for(int i=0;i<5;i++)
        {
            if(max<=array[i])
                max=array[i];
             else 
                 max=max;
        }
    min=array[0];
    for(int j=1;j<5;j++)
        {
        
        if(min<=array[j])
            min=min;
        else
            min=array[j];
    }
    printf("%lld %lld",min,max);
   
    return 0;
}
