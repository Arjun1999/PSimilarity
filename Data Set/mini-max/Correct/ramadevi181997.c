#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long double *a = malloc(sizeof(long double) * 5);
    long double *b = malloc(sizeof(long double) * 5);
    int i,j,k;
    long double sum,m,n;
    for(i = 0; i < 5; i++)
    {
       scanf("%Lf",&a[i]);
    }
    
  
    j=0;
    for(k=0;k<5;k++)
    {
        sum=0;
    for(i=0;i<5;i++)
    {
        if(i!=j)
        {
            sum=sum+a[i];
        }
    
    }
        b[k]=sum;
    j++;
    }
    /*for(i=0;i<5;i++)
    {
        printf("%d ",b[i]);
    }*/
    n=b[0];
    m=b[0];
    for(i=1;i<5;i++)
    {
        if(n<b[i])
        {
            n=b[i];
        }
    }
    for(i=1;i<5;i++)
    {
        if(m>b[i])
        {
            m=b[i];
        }
    }
    printf("%.0Lf %.0Lf",m,n);
    
    return 0;
}
