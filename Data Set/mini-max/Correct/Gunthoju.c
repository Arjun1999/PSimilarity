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
    long int temp;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int a1[5] = {a,b,c,d,e};
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(a1[i]>a1[j]){
                temp=a1[i];
                a1[i]=a1[j];
                a1[j]=temp;
            }
        }
    }
    long int minimum =a1[0]+a1[1]+a1[2]+a1[3];
    long int maximum = a1[1]+a1[2]+a1[3]+a1[4];
    printf("%ld %ld",minimum,maximum);
    
    return 0;
}
