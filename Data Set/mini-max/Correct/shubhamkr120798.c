#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
  long int a[5],t;
int i=0,j=0;
for(i=0;i<5;i++)
    scanf("%ld",&a[i]);
   for(i=0;i<5;i++)
{
     for(j=i+1;j<5;j++)
{
       if(a[i]>a[j])
{
         t=a[i];
a[i]=a[j];
a[j]=t;
       }
     }
   }

   long int small;
     long int big;
   for(i=0;i<4;i++)
small+=a[i];
for(i=1;i<5;i++)
big+=a[i];
printf("%ld %ld",small,big);
    return 0;
}
