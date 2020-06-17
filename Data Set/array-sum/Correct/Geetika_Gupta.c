#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long a[1000],sub,N,sum=0;
    scanf("%lld\n",&N);
    for(sub=0;sub<N;sub++){
        scanf("%lld ",&a[sub]);
        sum=sum+a[sub];
    }
    printf("%lld",sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
