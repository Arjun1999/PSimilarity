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
    int i,j;long int minimum,maximum,temp;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);    
    for(j=0;j<5;j++){
        if(j==0){
            temp=maximum=minimum=(b+c+d+e);
        }
        else
            temp=a+((j!=1)?b:0)+((j!=2)?c:0)+((j!=3)?d:0)+((j!=4)?e:0);
        if(temp<minimum)
            minimum=temp;
        if(temp>maximum)
            maximum=temp;
    }   
    printf("%ld %ld",minimum,maximum);
    return 0;
}
