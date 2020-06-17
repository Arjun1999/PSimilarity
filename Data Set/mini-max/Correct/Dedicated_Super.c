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
    long int array[5] = {a,b,c,d,e};
    long int sum = 0;
    long int i,max,min,sum1=0,sum2=0;

    min = array[0];
    max = array[0];
for(i=1; i<5; i++){

    if(array[i]<min)
        min = array[i];
}
for(i=1; i<5; i++){

    if(array[i]>max)
        max = array[i]; 
}
for(i= 0 ;i <5; i++){
     sum = sum + array[i];
}
sum1 = sum - min;
sum2 = sum - max;

printf("%ld %ld ",sum2,sum1);
    return 0;
}
