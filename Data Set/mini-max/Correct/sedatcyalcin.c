#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
   
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int arr[5]={a,b,c,d,e};
    for (int c = 1 ; c <= 5 - 1; c++) {
    int d = c;
 
    while ( d > 0 && arr[d] < arr[d-1]) {
      long int t   = arr[d];
      arr[d]   = arr[d-1];
      arr[d-1] = t;
 
      d--;
    }
  }
    
    
    
    printf("%ld %ld",(arr[0]+arr[1]+arr[2]+arr[3]),(arr[4]+arr[3]+arr[2]+arr[1]));
    
    return 0;
}
