#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
 long int arr[1000],i, sum = 0,n;

  scanf("%ld",&n);
  for(i=0; i<n; i++)
    {
      scanf("%ld", &arr[i]);
    }                                                                
      for (i = 0; i <n; i++)
        {
          sum = sum + arr[i];
        }

      printf("%ld\n", sum);
   
    return 0;   
}
