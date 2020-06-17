#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int* m(int *a,int n)
{
    int max=a[0];
    int min=a[0];
    int l[2],i;
    for(i=0;i<n;i++)
    {
        if (a[i]<min)
            min=a[i];
        if (a[i]>max)
            max=a[i];
    }
    l[0]=min;
    l[1]=max;
    return l;
}
int sum(int *a,int n)
{
    s=0;
    for(i=0;i<n;i++)
        s+=a[i];
    return s;
}

int main(){
    long int a[5];
    for(int i=0;i<5;i++)
        scanf("%d",&a[i]);
    int *p=m(a,5);
    int s=sum(a,n);
    printf("%d %d",s-p[1],s-p[0]);
    return 0;
}