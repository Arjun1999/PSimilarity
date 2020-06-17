#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
long int sum;
long int small;
long int big;
long int minValue;
long int maxValue;

void BigSmall(int a, int b, int c, int d, int e){
    long int Array[5] = {a,b,c,d,e};
    int counter=0;
    int equality=0;
    int i;
    int j;
    
    for(i=0; i<5; i++){
        counter=0;
        equality=0;
        for(j=0; j<5; j++){
            if(Array[i] > Array[j]){
                counter++;
            }
            else if(Array[i] == Array[j]){
                equality++;
            }
        }
        
        if(counter == 4 || equality == 5){
            big = Array[i];
        }
        if(counter == 0){
            small = Array[i];  
        }
    }    
}

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    
    sum = a+b+c+d+e;
    
    BigSmall(a,b,c,d,e);
    
    minValue = sum - big;
    maxValue = sum - small;
    printf("%ld ", minValue);
    printf("%ld ", maxValue);
    return 0;
}


