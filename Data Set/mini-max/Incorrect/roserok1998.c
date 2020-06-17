#include <stdio.h>
int main() 
{
  int ind, min = 0, max = 0, ar[5];
  for (ind = 0; ind < 5; ind++)
    scanf("%d ", &ar[ind]);
  for (ind = 0; ind < 4; ind++) {
    if (ar[ind] < ar[ind + 1])
      min += ar[ind];
    if (ar[ind] < ar[ind + 1])
      max += ar[ind + 1];
  }
  printf("%d %d", min, max);
}
