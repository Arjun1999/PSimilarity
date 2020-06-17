#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  long long a[5];
  long long sum=0;
    for(i=0;i<5;i++)
    {
      cin >> a[i];
      sum += a[i];
    }
  sort (a,a+1);
  cout << sum -a[4]"" << sum -a[0]<<end1;
  return 0;
}