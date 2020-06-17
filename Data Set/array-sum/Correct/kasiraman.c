#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long n,sum=0,a[1000],i;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
        {scanf("%ld",&a[i]);}
    for(i=0;i<n;i++)
        {
        sum=sum+a[i];
    }
    printf("%ld",sum);
    return 0;
}
