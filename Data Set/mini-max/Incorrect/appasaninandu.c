#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
    int i,n,j,k,l,s1;
    int a[10],b[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0,k=0;i<n;i++,k++)
    {
        s1=0;
        for(j=0;j<n;j++)
        {
            if(j!=i)
            {
                s1=s1+a[j];
            }
        }
        b[k]=s1;
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
                l=b[i];
                b[i]=b[j];
                b[j]=l;
            }
        }
    }
    printf("%d",b[0]);
    printf("%d",b[n-1]);
}

