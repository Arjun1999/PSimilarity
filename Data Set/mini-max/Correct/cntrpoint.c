#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    size_t item_count = 5;
    long int items[item_count];
    for (size_t item_index = 0; item_index < item_count; ++item_index) {
        scanf("%ld", &items[item_index]);
    }

    long long int sums[item_count];
    for (size_t sum_index = 0; sum_index < item_count; ++sum_index) {
        sums[sum_index] = 0;
        for (size_t item_index = 0; item_index < item_count; ++item_index) {
            if (item_index != sum_index) {
                sums[sum_index] += items[item_index];
            }
        }
    }

    size_t min_sum_index = 0;
    size_t max_sum_index = 0;
    for (size_t sum_index = 0; sum_index < item_count; ++sum_index) {
        if (sums[sum_index] < sums[min_sum_index]) {
            min_sum_index = sum_index;
        }
        if (sums[sum_index] > sums[max_sum_index]) {
            max_sum_index = sum_index;
        }
    }

    printf("%lld %lld\n", sums[min_sum_index], sums[max_sum_index]);

    return 0;
}
