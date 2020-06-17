#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100000
#define MAX_VAL 1000000001

int list[MAX];

int main() {

  int N, K;
  int i;
  int unfairness = 0;
  scanf_s("%d %d", &N, &K);
  int set = K - 1;
  for (i = 0; i < N; i++)
    scanf_s("%d", &list[i]);
  for (int l = 0; l < N - 1; l++) {
    for (int j = 0; j < N - l - 1; j++) {
      if (list[j] > list[j + 1]) {
        int temp;
        temp = list[j];
        list[j] = list[j + 1];
        list[j + 1] = temp;
      }
    }
  }
  for (int x = 0; x < N - set; x++) {
    int differ = list[x + set] - list[x];
    // printf("Dif - %d\n", differ);
    // printf("Unfair - %d\n", unfairness);
    if (unfairness == 0) {
      unfairness = differ;
    } else if (differ < unfairness)
      unfairness = differ;
  }
  printf("%d", unfairness);
  return 0;
}
