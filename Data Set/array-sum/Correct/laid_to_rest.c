#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long n, a, sum=0,i;
    scanf("%ld\n", &n);
    for(i=0;i<n;i++)
    {
        scanf("%ld\n", &a);
        sum+=a;
    }
    printf("%ld\n", sum);
    return 0;
}
