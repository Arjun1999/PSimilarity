#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int i,a[n];
    long long sum=0;
    for(i=0;i<n;i++)
      { scanf("%d",&a[i]);
    sum=sum+a[i];}
    printf("%lld",sum);
    return 0;
}
