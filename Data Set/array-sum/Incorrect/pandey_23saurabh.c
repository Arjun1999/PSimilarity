#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{int N , i, a[100] ;

 scanf("%d",&N) ;
int  sum =0 ;
 for(i=0;i<N;i++)
 {
     scanf("%d",&a[i]) ;
     sum += a[i] ;
 }
 printf("%d",sum);
 
    
    
}