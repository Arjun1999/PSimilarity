#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long int i,n,sum=0,arr[1000];
    scanf("%lld",&n);
    for(i=0;i<n;i++)
        {
        scanf("%lld",&arr[i]);
    }
    for(i=0;i<n;i++)
        {
        sum=sum+arr[i];
    }
    printf("%lld",sum);
    return 0;
}
