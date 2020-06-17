#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5]; 
    long int sum=0; 
    long int max=0;
    long int min=INT_MAX;
   for(int i=0;i<5;i++){
    scanf("%ld",&a[i]); sum=sum+a[i];
       if(a[i]>max) max=a[i]; if(a[i]<min) min=a[i]; }
    printf("%ld %ld",sum-max,sum-min);
    return 0;
}
