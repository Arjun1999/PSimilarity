#include <stdio.h>
#include <limits.h>

int main()
{
    long is[5], min = INT_MAX, max = INT_MIN, sum = 0;

    scanf("%ld %ld %ld %ld %ld", is, is + 1, is + 2, is + 3, is + 4);
    
    for (int i = 0 ; i < 5; ++i) {
        sum += is[i];
        if (is[i] < min) {
            min = is[i];
        }
        if (is[i] > max) {
            max = is[i];
        }
    }
    
    printf("%ld %ld", sum - max, sum - min);
    
    return 0;
}
