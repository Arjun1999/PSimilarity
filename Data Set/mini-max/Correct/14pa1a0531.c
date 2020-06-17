#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5]; 
    long long int s1=0,s2=0;
    scanf("%lld %lld %lld %lld %lld",&a[1],&a[2],&a[3],&a[4],&a[0]);
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            if(a[i]<a[j]){
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
    for(int i=0;i<4;i++)
        s1=s1+a[i];
    for(int i=4;i>0;i--)
        s2=s2+a[i];
    printf("%lld %lld",s1,s2);
    return 0;
}
