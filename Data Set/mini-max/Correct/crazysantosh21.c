#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   long long int a[5],s=0,s1=0;
    int i,j;
    for(i=0;i<5;i++)
    scanf("%lld",&a[i]);
    for(i=0;i<5;i++)
        for(j=i;j<5;j++)
        if(a[i]>a[j])
        {int temp=a[i];
        a[i]=a[j];
        a[j]=temp;}
    for(i=0;i<4;i++)
        s=s+a[i];
    for(i=1;i<5;i++)
        s1+=a[i];
    printf("%lld %lld",s,s1);
    return 0;
}
