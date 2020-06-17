#include <stdio.h>
int sum(int[]);
int main() {
  int i, a[] = {1, 2, 3, 4, 10, 11}, c;

  c = sum(a);
  printf("the sum is \t%d", c);
  return 0;
}
int sum(int a[]) {
  int i, total = 0;
  for (i = 0; i <6; i++) {
    total = total + a[i];
  }
  return total;
}
