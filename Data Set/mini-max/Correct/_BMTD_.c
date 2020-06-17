#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
long long *nhap(long long n)
{
    long long a[n];
    long long i;
    for(i=0;i<n;i++)
    {
        scanf("%lli",&a[i]);
    }
    
   return a;
}

long long min(long long  a[],long long n)
{
    long long i=0,min=a[0];
    for (i;i<n;i++)
    {
        if(min>a[i])
            min=a[i];
    }
    return min;
}

long long max(long long a[],long long n)
{
    long long i=0,max=a[0];
    for (i;i<n;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    return max;
}

long long sum(long long a[],long long n)
{
    long long sum=0,i;
    for(i=0;i<n;i++)
        sum+=a[i];
    return sum;
}

int main(){
    long long  *a,i,n=5,min_value,max_value,sum_value;
    a=nhap(n);
    min_value=min(a,n);
    max_value=max(a,n);
    sum_value=sum(a,n);
    printf ("%lli %lli",sum_value-max_value,sum_value-min_value);
}
