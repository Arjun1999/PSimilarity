#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int i;
    long int a1,a2,a3,a4,a5;
    scanf("%ld %ld %ld %ld %ld",&a1,&a2,&a3,&a4,&a5);
    long int a[5]={a1+a2+a3+a4,a2+a3+a4+a5,a1+a2+a4+a5,a1+a3+a4+a5,a1+a2+a3+a5};
    long int min=a[0];
    long int max=a[0];

    for (int i=0; i<5;i++){
        if (a[i]>max){
            max=a[i];
        }
        if (a[i]<min){
            min=a[i];
        }

    }
   printf("%ld %ld",min,max);
    
    return 0;
}
