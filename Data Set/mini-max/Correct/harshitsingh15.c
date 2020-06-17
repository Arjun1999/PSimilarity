#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
   long int a[5],i;
   for(i=0;i<5;i++)scanf("%ld",&a[i]);
   int j,k;
   for(j=0;j<5;j++){
    for(k=0;k<=j;k++){
            if (a[k]>a[j]){
            int tmp=a[j];
            a[j]=a[k];
            a[k]=tmp;
        }
    }
   }
printf("%ld %ld",a[0]+a[1]+a[2]+a[3],a[1]+a[2]+a[3]+a[4]);

}