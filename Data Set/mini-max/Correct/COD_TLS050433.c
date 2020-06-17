#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5],sum_min=0,sum_max=0; 
    for(int i=0;i<5;i++) {
        scanf("%lld",&a[i]);
    }
    for(int i=0;i<5;i++) {
        for(int j=i;j<5;j++) {
            if(a[i]>a[j]) {
                long long int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<4;i++)
        sum_min=sum_min+a[i];
    for(int i=1;i<5;i++)
        sum_max=sum_max+a[i];
    printf("%lld %lld",sum_min,sum_max);
    return 0;
}
