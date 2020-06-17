#include<stdio.h>
main()
 {
  int n, i, j, c, a[6], f1 = 0, f2 = 0;
  for (i = 0; i < 5; i++)
    scanf("%d", &a[i]);
  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
      if (a[j] > a[j + 1])
        c = a[j];
        a[j] = a[j + 1];
        a[j + 1] = a[j];
  }
  for (i = 0; i < 4; i++)
    f1 = f1 + a[i];
  for (i = 1; i < 5; i++)
    f2 = f2 + a[i];
  printf("%d %d", f1, f2);
}
