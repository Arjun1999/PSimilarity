
#include <stdio.h>

int main()
{
  long int array[5],c, d, swap;
  long int max=0,min=0,i=0;






  for (c = 0; c < 5; c++)
    scanf("%ld", &array[c]);

  for (c = 0 ; c < ( 5 - 1 ); c++)
  {
    for (d = 0 ; d < 5 - c - 1; d++)
    {
      if (array[d] > array[d+1]) 
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
 for(i=0;i<4;i++)
    min=(min+array[i]);
 for(i=1;i<5;i++)
    max=(max+array[i]);

 printf("%ld %ld",min,max);



  return 0;
}
