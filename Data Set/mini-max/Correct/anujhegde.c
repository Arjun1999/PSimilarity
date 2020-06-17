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
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int sum1,sum2,sum3,sum4,sum5;
    //long long int min,max;
    sum1=a+b+c+d;
    sum2=a+b+c+e;
    sum3=a+b+e+d;
    sum4=a+e+c+d;
    sum5=e+b+c+d;
    long long int z[5]={sum1,sum2,sum3,sum4,sum5};
    long long int min=sum1;
    long long int max=sum1;
    int i;
    for (i=1;i<5;i++)
        {
        if(z[i]<min)
            {
            min=z[i];
        }
        if(z[i]>max)
            {
            max=z[i];
        }
        
    }
    printf("%lld %lld",min,max);
    
    return 0;
}
