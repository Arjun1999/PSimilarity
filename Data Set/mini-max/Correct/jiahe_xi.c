#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5]; 
    for(int i=0; i<5; i++) scanf("%lli",&a[i]);
    long long int a_sum=0,a_min=LLONG_MAX,a_max=LLONG_MIN;
    for(int i=0; i<5; i++) 
    {
        if(a[i]<a_min) a_min=a[i];
        if(a[i]>a_max) a_max=a[i];
        a_sum+=a[i];
    }
    printf("%lli %lli",a_sum-a_max,a_sum-a_min);    
    return 0;
}
