#include <stdio.h>

typedef long long int Long;

Long min, max, sum, x;
int main() {
    long long int a;
    sum = max = 0;
    min = 5LL*1000000001LL;
    for(int i = 0; i < 5; i++) {
        scanf("%lld", &x);
        sum += x;
        if(x < min) min = x;
        if(x > max) max = x;
    }
    
    printf("%lld %lld", sum - max, sum - min);
    return 0;
}
