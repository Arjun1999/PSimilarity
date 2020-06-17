#include <limits.h>
#include <stdio.h>

int main() {
  const size_t sz = 5;
  long n[sz];

  long sum = 0;
  for (size_t i = 0; i < sz; ++i) {
    scanf("%ld", &n[i]);
    sum += n[i];
  }

  long min_sum = LONG_MAX;
  long max_sum = 0;
  for (size_t i = 0; i < sz; ++i) {
    long curr_sum = sum - n[i];
    if (curr_sum < min_sum) min_sum = curr_sum;
    if (curr_sum > max_sum) max_sum = curr_sum;
  }

  printf("%ld %ld\n", min_sum, max_sum);
}