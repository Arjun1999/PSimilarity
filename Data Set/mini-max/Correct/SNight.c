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
    long int sum1;
    long int sum2;
    long int sum3;
    long int sum4;
    long int sum5;
    sum1=a+b+c+d;
    sum2=a+b+c+e;
    sum3=a+c+d+e;
    sum4=a+b+d+e;
    sum5=b+c+d+e;
    if(sum1<sum2 && sum1<sum3 && sum1<sum4 && sum1<sum5)
        printf("%ld",sum1);
        else if(sum2<sum3 && sum2<sum4 && sum2<sum5)
        printf("%ld",sum2);
        else if(sum3<sum4 && sum3<sum5)
        printf("%ld",sum3);
        else if(sum4<sum5)
        printf("%ld",sum4);
        else
        printf("%ld",sum5);
            if(sum1>sum2 && sum1>sum3 && sum1>sum4 && sum1>sum5)
                printf(" %ld",sum1);
                else if(sum2>sum3 && sum2>sum4 && sum2>sum5)
                printf(" %ld",sum2);
                else if(sum3>sum4 && sum3>sum5)
                printf(" %ld",sum3);
                else if(sum4>sum5)
                printf(" %ld",sum4);
                else
                printf(" %ld",sum5);
            
    
          
    return 0;
}

