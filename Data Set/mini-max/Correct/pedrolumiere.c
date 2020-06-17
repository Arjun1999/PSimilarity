#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <stdint.h>
//coletar numeros da matriz;
//percorrer matriz somando verificando maior e menor soma; 
int main(){
    int64_t a[5], sum = 0;
    int64_t min, max = 0;
    for(int i = 0; i < 5;i++) {
        scanf("%ld ", &a[i]);
        sum += abs(a[i]);
    }
    for(int j = 0; j < 5;j++) {
        int64_t temp = 0;
        temp = sum - abs(a[j]);
        if(temp < min) min = temp;
        if(temp > max) max = temp;
    }
    printf("%ld %ld\n", min, max);
    
    return 0;
}
