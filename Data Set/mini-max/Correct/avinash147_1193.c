#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int k, m,t;
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    long int f=0;
    long int g=0;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int arr[40];
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    arr[3]=d;
    arr[4]=e;
    
   for (k = 1 ; k <= 4; k++) {
    m = k;
 
    while ( m > 0 && arr[m] < arr[m-1]) {
      t          = arr[m];
      arr[m]   = arr[m-1];
      arr[m-1] = t;
 
      m--;
    }
  }
    
     
   
    for (k = 0; k <= 3; k++) {
       g=g+arr[k];
  }
    for (k =4; k>=1; k--) {
       f=f+arr[k];
       
  }
    printf("%ld %ld",g,f);
    return 0;
}
