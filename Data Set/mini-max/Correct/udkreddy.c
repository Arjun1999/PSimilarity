#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a,i,j,min1,m2,mx1,mx2,min,m3,max; 
    long long int b,c,e,d;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
 /*   for(i=0;i<5;i++){
        for(j=0;j<5-i;j++){
            if(a[i]>a[j]){temp=a[i];a[i]=a[j];a[j]=temp;}
        }
    }*/
    a<b?(min1=a):(min1=b);
    c<d?(m2=c):(m2=d);
    min1<m2?(m3=min1):(m3=m2);
    m3<e?(min=m3):(min=e);
    a>b?(min1=a):(min1=b);
    c>d?(m2=c):(m2=d);
    min1>m2?(m3=min1):(m3=m2);
    m3>e?(max=m3):(max=e);
    long long int sum=a+b+c+d+e;
    printf("%lld %lld",sum-max,sum-min);
    return 0;
}
