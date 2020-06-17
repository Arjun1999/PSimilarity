#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sum(int a[],int n);
int max(int a[],int n);
int min(int a[],int n);

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int d,x,y;
    d=sum(a,n);
    x=max(a,n);
    y=min(a,n);
    /*printf("%d %d %d\n",d,x,y);*/
    printf("%d %d",d-x,d-y);
    return 0;
}
int sum(int a[],int n)
{
    int s=0,i;
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    return s;
}
int max(int a[],int n)
{
    int i,m;
    m=a[0];
    for(i=1;i<n;i++){
        if(a[i]>m)
            m=a[i];
        else
            continue;
    }
    return m;
}
int min(int a[],int n)
{
    int i,m;
    m=a[0];
    for(i=1;i<n;i++){
        if(a[i]<m)
            m=a[i];
        else
            continue;
    }
    return m;
}

