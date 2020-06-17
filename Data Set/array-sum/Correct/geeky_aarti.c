#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long n,a[10000],i,sum=0;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
        {
        scanf("%ld",&a[i]);
        sum+=a[i];
    }
    printf("%ld\n",sum);
    return 0;
}
