#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long int min(long int a[100], int n){
    int i, m = a[0];
    for(i = 0; i < n ; i++ ){
        if(m > a[i]){
            m = a[i];
        }
    }
    return m;
}
long int max(long int a[100], int n){
    int i, m = a[0];
    for( i = 0; i < n ; i++){
        if(m < a[i]){
            m = a[i];
        }
    }
    return m;
}

int main(){
    long int a[5], v[5];
    long int minim = 0, maxim = 0, s=0;
    int i;
    
    for(i = 0; i < 5; i++){
        scanf("%li", &a[i]);
    }
    for(i = 0; i < 5; i++){
        s += a[i];
    }
    
    maxim = s - min(a, 5);
    minim = s - max(a, 5);
    
    printf("%li %li \n", minim, maxim);
    
    return 0;
}
