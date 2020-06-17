#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int i,j;
    long long int max, min;
    long long int a[5],b[5];
    for(i = 0; i < 5; i++){
       scanf("%lli",&a[i]);
    }
    for(i = 0; i < 5; i++){
      // scanf("%lli",&a[i]);
        b[i]=0;
    }
    i=0;
    min=LONG_MAX;
    max=0;
    while(i<5){
      for( j = 0; j < 5; j++){
    if(i==j){
            continue;        
        }
          b[i]=b[i]+a[j];
      }
    if(b[i]>max){
        max=b[i];
    }
    
    if(b[i]<min){
        min=b[i];
    }
        i++;
    }
    printf("%lli %lli",min,max);
    return 0;
}
