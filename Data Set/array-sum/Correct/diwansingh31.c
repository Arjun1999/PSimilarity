#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long int sum=0;
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        {
        sum+=a[i];
    }
    printf("%ld",sum);
    return 0;
}
