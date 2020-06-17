#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int numbers[5]; 
    long int max = 0, min = 0;
    for(int i = 0; i < 5; i++){
        scanf("%ld", &numbers[i]);
    }
    for(int i = 0; i < 5; i++) {
        long int temp = 0;
        for(int j = 0; j < 5; j++){
            if(i != j){
                temp += numbers[j];
            }
        }
        max = temp > max ? temp : max;
        min = min != 0 ? (temp < min ? temp : min) : temp;
    }
    printf("%ld %ld", min, max);
    return 0;
}
