#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void calc(long int a[])
{
    long int mn,mx,j,k,b[5]={0,0,0,0,0};
    for(j=0;j<5;j++)
    {
        for(k=0;k<5;k++)
        {
            b[j]+=a[k];
        }
        b[j]-=a[j];
    }
    mn=mx=b[0];
    for(j=1;j<5;j++)
    {if(mn>b[j])
        mn=b[j];
     if(mx<b[j])
         mx=b[j];
    }
    printf("%ld %ld", mn,mx);
    
}

int main() {
    long int i,a[5];
    for(i=0;i<5;i++)
        scanf("%ld", &a[i]);
    calc(a);
    
    
    return 0;
}
