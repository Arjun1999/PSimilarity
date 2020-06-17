#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long int sum=0;
    int n,a,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        sum+=a;
    }
    printf("%lld",sum);    
    return 0;
}
