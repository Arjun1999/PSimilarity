#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int main(){
    long int a1; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a1,&b,&c,&d,&e);
    int a[5];
    a[0]=a1;
    a[1]=b;
    a[2]=c;
    a[3]=d;
    a[4]=e;
    int i, j;
    for (i = 0; i < 5-1; i++)      
    {// Last i elements are already in place   
           for (j = 0; j < 5-i-1; j++) 
          {     if (a[j] > a[j+1])
         {         swap(&a[j], &a[j+1]);
         }}}
    int min=0;
    int max=0;
    min = a[0]+a[1]+a[2]+a[3];
    max = a[1]+a[2]+a[3]+a[4];
    printf("%ld %ld", min, max);
    return 0;
}
