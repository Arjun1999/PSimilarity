#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
long int n,i,sum=0;
    scanf("%ld",&n);
    long int a[n];
    for(i=0;i<n;i++)
        {
        scanf("%ld",&a[i]);
            sum=sum+a[i];
    }
    printf("%ld",sum);
}
