#include <stdio.h>

int main(void) {
    int data, lo, hi;
    unsigned long long sum = 0;
    scanf("%llu", &sum);
    hi = lo = sum;
    for(int i = 1; i < 5; i++) {
        scanf("%d", &data);
        if (data < lo) lo = data;
        if (data > hi) hi = data;
        sum += data;
    }
    printf("%llu %llu", sum - hi, sum - lo);
    return 0;
}
