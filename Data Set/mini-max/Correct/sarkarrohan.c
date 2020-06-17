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
    long int sum = a+b+c+d+e;
    long int s[5];
    s[0] = sum-a;s[1] = sum-b;s[2] = sum-c;s[3] = sum-d;s[4] = sum-e;
    long int max =s[0];long int min = s[0];
    for (int i =0;i<5;i++)
        {
         if(s[i]>max)
             max = s[i];
         if(s[i]<min)
             min = s[i];
        }
    printf("%lld %lld",min,max);
    return 0;
}
