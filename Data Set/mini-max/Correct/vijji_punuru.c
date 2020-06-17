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
      long long int p;
      long long int q;
      long long int r;
      long long int s;
      long long int t;
    long long int z;
    long long int y;
    long long int k[5];
    long long int i;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    p=a+b+c+d;
    q=a+b+c+e;
    r=a+b+d+e;
    s=a+c+d+e;
    t=b+c+d+e;
    k[0]=p;
    k[1]=q;
    k[2]=r;
    k[3]=s;
    k[4]=t;
    z=k[0];
    y=k[0];
    for(i=1;i<5;i++)
        {
        if(k[i]>z)
            z=k[i];
    }
       for(i=1;i<5;i++)
        {
        if(k[i]<y)
            y=k[i];
       
    }
    printf("%lld %lld",y,z);
    return 0;
}
