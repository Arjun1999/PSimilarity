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
    long int min;
    long int max;
    long int value[5];
    long int minSum = 0;
    long int maxSum = 0;
long int temp;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    value[0]=a;
    value[1]=b;
    value[2]=c;
    value[3]=d;
    value[4]=e;
  for(int i=1;i<=5;i++){
      for(int j=1;j<(5);j++){
          if(value[j-1]>value[j]){
              temp = value[j-1];
              value[j-1]=value[j];
              value[j]=temp;
          }
      }
  }
    for(int k=0;k<5;k++){
        if(k==0){
            minSum+=value[k];
        }else if(k==4){
            maxSum+=value[k];
        }else{
             minSum+=value[k];
             maxSum+=value[k];
        }
    }
    

    printf("%ld %ld",minSum,maxSum);
    return 0;
}
