#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   long long int a[5]; 
   long long int l,k,i,j;
   
        for(i=0;i<5;i++)
    scanf("%lli",&a[i]);
    l=a[0];
    k=a[0];
    j=a[0];
              for(i=1;i<5;i++){
                  if(l<a[i])
                      l=a[i];
                  if(k>a[i])
                      k=a[i];
                  j=j+a[i];
              }
    printf("%lli\t%lli",j-l,j-k);
    return 0;
}
