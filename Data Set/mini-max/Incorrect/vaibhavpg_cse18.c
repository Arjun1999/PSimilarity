#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

int i,k,temp,min,max ;
int j ;
int a[5];
for (i=0;i<5;i++)
{printf ("enter the values :");
    scanf("%d",a[i]);
}
for (j=0;j<4;j++)
{if (a[j]>a[j+1])
 {temp=a[j] ;
 a[j]=a[j+1];
 a[j+1]=temp ;
 }
}
min=(a[1]+a[2]+a[3]+a[4]);
max=(a[1]+a[2]+a[3]+a[0]);
printf ("\n%d",min);
printf ("%d",max);
return 0;
}