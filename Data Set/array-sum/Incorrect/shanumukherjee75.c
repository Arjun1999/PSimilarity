#include <stdio.h>

int main() {
  int n, sum = 0, c, array[1000];

 
  scanf("%d", &n);

 

  for (c = 0; c <= n; c++) {
    scanf("%d", &array[c]);
    sum = sum + array[c];
  }

  printf("%d\n", sum);

  return 0;
}
