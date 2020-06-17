#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a,b,c,d,e;
    int i,j;
    long long int s[5],temp;

    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);

    s[0]=a+b+c+d;
    s[1]=a+b+c+e;
    s[2]=a+b+d+e;
    s[3]=a+c+d+e;
    s[4]=b+c+d+e;
    
    for(j=0;j<4;j++)
    for(i=0;i<4-j;i++)
    {
        if(s[i]>s[i+1])
            {
            temp=s[i+1];
            s[i+1]=s[i];
            s[i]=temp;
        }
    }
    printf("%lld %lld",s[0],s[4]);

    return 0;
}
