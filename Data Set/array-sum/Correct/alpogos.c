#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int size, sum = 0;
  scanf("%i", &size);

  int i, num;
  for (i = 0; i < size; i++) {
    scanf("%i", &num);
    sum += num;
  }
  printf("%i", sum);
  return 0;
}
