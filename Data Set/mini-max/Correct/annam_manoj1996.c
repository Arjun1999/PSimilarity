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
    long int max;
     long int min;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int n[5];
  n[0]=b+c+d+e;
    n[1]=a+c+d+e;
      n[2]=a+b+d+e;
      n[3]=a+c+b+e;
      n[4]=a+c+d+b;
    min=n[0];
    max=n[0];
        for(int i = 0; i <5; i++){
    if(n[i]> max)
       max = n[i];
    if(n[i] < min)
        min = n[i];}

printf("%ld %ld",min, max);
return 0;
    return 0;
    
}
