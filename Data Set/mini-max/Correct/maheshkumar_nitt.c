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
    long long int *p;
    long long int i,j,x;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    p= malloc(sizeof(long long int)*5);
    p[0]=a+b+c+d;
    p[1]=a+b+c+e;
    p[2]=a+b+d+e;
    p[3]=b+c+d+e;
    p[4]=a+c+d+e;
    
    for(i=0;i<4;i++)
        {
        for(j=i+1;j<5;j++)
            {
            if(p[i]<p[j])
                {
                x=p[i];
                p[i]=p[j];
                p[j]=x;
            }
        }
        
        }
    printf("%lld %lld",p[4],p[0]);

    
    
    return 0;
}
