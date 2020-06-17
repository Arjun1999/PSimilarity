#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
     long long int a[5],i,j,b[5],sum, smallest, largest;

   for(i=0;i<5;i++)
  {
   scanf("%lld",&a[i]);
  }

      sum=0;
      for(i=1;i<5;i++)
           {
               sum+=a[i];
           }
           b[0]=sum;


        sum=0;
        for(i=0;i<5;i++)
        {
            if(i==1)
                continue;

            sum+=a[i];
        }
        b[1]=sum;


        sum=0;
        for(i=0;i<5;i++)
        {
            if(i==2)
                continue;

            sum+=a[i];
        }
        b[2]=sum;


        sum=0;
        for(i=0;i<5;i++)
        {
            if(i==3)
                continue;

            sum+=a[i];
        }
        b[3]=sum;


        sum=0;
        for(i=0;i<5;i++)
        {
              if(i==4)
                continue;

            sum+=a[i];
        }
        b[4]=sum;


   smallest = b[0];

   for (i = 0; i < 5; i++) {
      if (b[i] < smallest) {
         smallest = b[i];
      }
   }

   largest =0;

   for(i=0; i<5; i++)
   {
    if(b[i]>largest)
    {
     largest=b[i];
    }
   }

   printf("%lld %lld", smallest, largest);

   return 0;
}
