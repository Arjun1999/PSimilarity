#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b[4]; 
    long int max; 
    long int min;
    long int e;
    int i;
    scanf("%ld",&a);
    max=a;
    min=a;
    for(i=0;i<4;i++){
        scanf("%ld",&b[i]);
        if(b[i]>max)
            max=b[i];
        if(b[i]<min)
            min=b[i];
        a+=b[i];
    }
    
    printf("%ld %ld",a-max,a-min);
    return 0;
}
