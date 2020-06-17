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
    long int e,*p[5];
    long long int sum=0,max,min;
    int i,j;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    p[0] = &a;
    p[1] = &b;
    p[2] = &c;
    p[3] = &d;
    p[4] = &e;
    
    for(i=0;i<4;i++)
    {
        sum+=*p[i];
    }
    max = min = sum;
    
    for(i=0;i<5;i++)
        {
            sum = 0;
            for(j=0;j<5;j++)
            {
                if(j==i)
                    continue;
                else
                    sum += *p[j];
            }
            if(sum > max)
                max = sum;
            if(sum < min)
                min = sum;
        }
    printf("%lld %lld",min, max);
            
    return 0;
}
