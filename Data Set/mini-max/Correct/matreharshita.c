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
    int i;
    
    
    scanf("%li %li %li %li %li",&a,&b,&c,&d,&e);
   long int arr[5];
    arr[0]=b+c+d+e;
    arr[1]=a+c+d+e;
    arr[2]=a+b+d+e;
    arr[3]=a+b+c+e;
    arr[4]=a+b+c+d;
    long int max=arr[0];
    long int min=arr[0];
    for(i=0;i<5;i++){
       if(arr[i]>max)
           max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    printf("%li %li",min,max);
    return 0;
}
