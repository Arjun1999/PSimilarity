#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    long long int n,sum;
    sum=0;
    scanf("%d",&t);
    while(t--)
        {
        scanf("%lld",&n);
        sum=sum+n;
    }
    printf("%lld",sum);
}