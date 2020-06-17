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
    int ex=1,i=1,j=1,min,max,sum=0;
    
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    min = max =a;
    
    for(i;i<=5;i++)
    {
        for(j;j<=5;j++)
        {
            if(ex==j)
            {
                continue;
            }
            else
            {
                sum += j;
            }
        }
        max=(sum>max)?sum:max;
        min=(sum<min)?sum:min;
    }
    printf("℅lld ℅lld",min,max);
    return 0;
}
