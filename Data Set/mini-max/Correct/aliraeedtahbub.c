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
    long int arr[] = {a ,b ,c ,d ,e};
long int min = a , max =0 , sum = 0;
    for(i = 0 ; i < 5 ; i++){
        max = (arr[i] > max) ? arr[i] : max;
        min = (arr[i] < min ) ? arr[i]: min;
        sum = sum + arr[i];


    }
    printf("%li %li", (sum - max) , (sum - min));
    return 0;
}

