#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int in, min, max, sum = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%lld", &in);
        sum += in;
        if (i == 0) min = max = in;
        else {
            min = (min > in) ? in : min;
            max = (max < in) ? in : max;
        }
    }
    printf("%lld %lld", sum - max, sum - min);
    return 0;
}
