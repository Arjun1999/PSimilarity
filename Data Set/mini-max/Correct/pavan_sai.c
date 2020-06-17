#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void sort(long long int a[5]){
    int temp;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i] < a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main(){
    
    long long int min = 0;
    int i;
    long long int max = 0;
    long long int a[5] = {0};
    for(i=0;i<5;i++){
        scanf("%lld",&a[i]);
    }
    sort(a);
    for(i=0;i<5;i++){
        if(i != 4)
            min += a[i];
        if(i != 0)
            max += a[i];
    }
    printf("%lld %lld",min,max);
    return 0;
}
