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
    long int array[5]={a,b,c,d,e};
    
    long int temp;
    
    for(int m=0;m<5;m++)
    {
      for(int n=1;n<5;n++) 
      {
          if(array[n-1]>array[n])
          {
            temp=array[n-1];
            array[n-1]=array[n];
            array[n]=temp;
          }
      }  
    }
    
    long int min=array[0]+array[1]+array[2]+array[3];
    long int max=array[4]+array[3]+array[2]+array[1];
   
    printf("%ld %ld",min, max);
    
    
    
    
    return 0;
}
