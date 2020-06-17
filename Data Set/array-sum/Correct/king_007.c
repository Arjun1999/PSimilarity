#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,j,k,i;
    scanf("%d",&t);
    int a[t];
    long long int sum=0;
    for(i=0;i<t;i++){
        scanf("%d",&a[i]);
        sum += a[i];
    }
    printf("%lld\n",sum);
    return 0;
}
