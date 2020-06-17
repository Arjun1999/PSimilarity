#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int max[5];
    max[0]=b+c+d+e;
    max[1]=a+c+d+e;
    max[2]=a+b+d+e;
    max[3]=a+b+c+e;
    max[4]=a+b+c+d;
    long long int largest = max[0];
    long long int smallest = max[0];
    for(int i=0;i<5;i++) {
        if(largest<max[i]) {
            largest=max[i];
        }
    }
    for(int i=0;i<5;i++) {
        if(smallest>max[i]) {
            smallest=max[i];
        }
    }
    printf("%lld %lld",smallest,largest);
    return 0;
}
