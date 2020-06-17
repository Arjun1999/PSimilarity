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
    
    long int array[5];
           
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    
    array[0]=a;
    array[1]=b;
    array[2]=c;
    array[3]=d;
    array[4]=e;
    
    long int min,max;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(array[i]>array[j])
                {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
                
        }
    }
    max = array[0]+array[1]+array[2]+array[3];
    min = array[1]+array[2]+array[3]+array[4];
    
        printf("%ld %ld",min,max);
    
    return 0;
}
