#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long n,sum=0;
    scanf("%llu",&n);
    long long str[n];
    for(int i=0;i<n;i++){
        scanf("%llu",&str[i]);
        sum=sum+str[i];
    }
    printf("%llu",sum);
    return 0;
}
