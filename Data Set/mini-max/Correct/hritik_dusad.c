#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
long int a[5],b[5];
int i,j;

    for(i=0;i<5;i++){
    scanf("%ld",&a[i]);
    }
    b[0]=a[0]+a[1]+a[2]+a[3];
    b[1]=a[1]+a[2]+a[3]+a[4];
    b[2]=a[2]+a[3]+a[4]+a[0];
    b[3]=a[3]+a[4]+a[0]+a[1];
    b[4]=a[4]+a[0]+a[1]+a[2];

      long int min=b[0];
     long int max=b[0];

    for(i=0;i<5;i++){
        if(b[i]<min){
        min=b[i];
        }
        else if(b[i]>max){
        max=b[i];
        }

    }
    printf("%ld %ld",min,max);
}
