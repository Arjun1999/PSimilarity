#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int i,j,n;
    long long int a[5],s1=0,s2=0,temp;
    n=5;
    for(i=0;i<5;i++)
        {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n-1;i++)
       {
        for(j=i+1;j<n;j++)
            {
            if(a[j]<a[i])
                {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n-1;i++)
        {
        s1+=a[i];
    }
    for(i=1;i<n;i++)
        {
        s2+=a[i];
    }
    printf("%lld %lld",s1,s2);
    return 0;
}
