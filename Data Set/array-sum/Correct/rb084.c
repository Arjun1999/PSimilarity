#include <stdio.h>

int main()
{
  int N, i;
  int sum = 0;
  scanf("%d", &N);
  for(i = 1; i <= N; i++)
  {
    int x;
    scanf("%d", &x);
    sum += x;    
  }
  printf("%d\n", sum);
  
  return 0;
}
