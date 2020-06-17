#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long a[1000],sum=0;
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%llu",&a[i]);    
        sum=sum+a[i];
    }
    printf("%llu",sum);
    return 0;
}
