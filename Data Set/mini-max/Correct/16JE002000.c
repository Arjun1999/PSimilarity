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
    long int arr[5] = {a,b,c,d,e};
    long int S=arr[0], L=arr[0] ,s=0;
    
    for (int i=1;i<5;i++){
       
        if (arr[i]<S)
             S=arr[i];
    }
    
      for (int i=1;i<5;i++){
       
        if (arr[i]>L)
             L=arr[i];
    }
    
    for (int i=0;i<5;i++){
        s =s+arr[i];
    }
    
    printf ("%ld\t%ld",s-L,s-S);
    
    return 0;
}
