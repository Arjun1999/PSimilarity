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
    
    long int r=0;
    int i=0;
 
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int s[]={a,b,c,d,e};    
    r=s[0]+s[1]+s[2]+s[3]+s[4];
    long int r1,r2,r3,r4,r5,t;
    r1=r-a;
    r2=r-b;
    r3=r-c;
    r4=r-d;
    r5=r-e;
   long int g[]={r1,r2,r3,r4,r5};
 int j;
    for(i=0;i<4;i++)
        {
        for(j=i+1;j<5;j++)
            {
            if(g[i]>g[j])
                {
                t=g[i];
                g[i]=g[j];
                g[j]=t;
                
            }
        }
    }
    printf("%ld %ld",g[0],g[4]);
    return 0;
}
