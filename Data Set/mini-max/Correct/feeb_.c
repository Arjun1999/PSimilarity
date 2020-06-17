#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long int sum(long int vals[]) {
  long int res = 0;
  for (int i = 0; i < 5; i++)
    res += vals[i];
  return res;
}

void determine_max_min(long int *min_v, long int *max_v, long int vals[]) {
  long int all = sum(vals);
  long int this;
  long int curr_min = all - vals[0];
  long int curr_max = all - vals[0];

  for (int i = 0; i < 5; i++) {
    this = all - vals[i];
    if (this < curr_min)
      curr_min = this;
    if (this > curr_max)
      curr_max = this;
  }

  (*min_v) = curr_min;
  (*max_v) = curr_max;
}

int main(){
  long int vals[5];
  long int min_v;
  long int max_v;

  scanf("%ld %ld %ld %ld %ld", &vals[0], &vals[1], &vals[2], &vals[3], &vals[4]);

  determine_max_min(&min_v, &max_v, vals);

  printf("%ld %ld", min_v, max_v);
  return 0;
}
