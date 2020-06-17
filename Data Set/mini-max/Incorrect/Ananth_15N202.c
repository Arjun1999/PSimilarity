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
    t[0]=a;
    t[1]=b;
    t[2]=c;
    t[3]=d;
    t[4]=e;
    s=t[0]+t[1]+t[2]+t[3]+t[4];
    for(i=0;i<5;i++)
        {
        
        s[i]=s-t[i];
    }
    for(i=0;i<5;i++)
        {
        for(j=i;j<5;j++)
            {
            if(s[i]>s[j])
                {
                e=s[i];
                s[i]=s[j];
                s[j]=e;
            }
        }
    }
    printf("%d %d",s[0],s[4]);
    return 0;
}
