#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n=5;
    long long int menor=0;
    long long int mayor=0;
    
    long long int array[n];    
    long long int total=0; 
    
    for(int a=0;a<n;a++){
        scanf("%lld",&array[a]);
    } for(int valor=0;valor<n;valor++){
      for(int pos=0;pos<n;pos++){
          if(valor!=pos){
          total+=array[pos];
          }
          
      }        
       if(total<=menor || menor==0){
          menor=total;
       }
       if (total>mayor){
         
         mayor=total;
        }
        total=0;
        
    }
    printf("%lld %lld", menor, mayor);
    return 0;
}
