#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i;
    long long int sum=0;
    
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("%lld",sum);
}
