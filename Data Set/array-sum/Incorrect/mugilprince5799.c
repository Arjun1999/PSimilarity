#include<stdio.h>
int main()
{
  int i, a[10] = {338 ,65 ,713, 595, 428, 610, 728, 573, 871 ,868}, sum = 0;
  for (i = 0; i < 10; i++) {
    sum += a[i];
    }
    printf("%d",sum);
    return 0;
}

