#include <stdio.h>

int main() {
  int count = 0, i, j, arr[5],max,j1,j2;
  for (i = 0; i < 5; i++) 
  {
    scanf("%d", &arr[i]);
    count = count + arr[i];
  }

  for (i = 0; i < 5; i++) 
  {
    for (j = 0; j < 5 - i; j++) 
    {
      if (arr[j] < arr[j - 1])
        max = arr[j - 1];
      arr[j - 1] = arr[j];
      arr[j] = max;
    }
  }
  j1 = count-arr[0];
  j2 = count-arr[4];
  printf("%d %d",  j1,  j2);
}
