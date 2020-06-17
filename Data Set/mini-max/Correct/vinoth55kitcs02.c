#include <math.h>
#include <stdio.h>
#include <string.h>

#include <limits.h>
#include <stdbool.h>

int main(){
    long long int s; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    long long int a[5];
    scanf("%lld %lld %lld %lld %lld",&s,&b,&c,&d,&e);
    long long int sum=0;
    a[0]=s;a[1]=b;a[2]=c;a[3]=d;a[4]=e;
    
    long long int max=a[0];long long int min=a[0];
    for(int i=0;i<5;i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
        sum+=a[i];
    }
    printf("%lld %lld",sum-max,sum-min);
    return 0;
}
