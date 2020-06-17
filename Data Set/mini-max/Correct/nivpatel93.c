#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void calculate_Mini_Max_Sum(unsigned long long int array[]){
    unsigned long long int min = 0,max = 0,sum = 0;
    for (int i = 0; i < 5; i++) {
        sum = 0;
       for (int j = 0; j < 5; j++) {
           if (j == i) {
                    
           }else {
               sum += array[j];
           }
       }
        if (i == 0) {
            min = sum;
            max = sum;
        } else {
        if (min > sum) {
            min = sum;
        }
        if (max < sum) {
            max = sum;
        }
        }
    }
    printf("%lld %lld", min, max);
}

int main(){
    unsigned long long int a; 
    unsigned long long int b; 
    unsigned long long int c; 
    unsigned long long int d;
    unsigned long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    unsigned long long int array[5] = {a,b,c,d,e};
    calculate_Mini_Max_Sum(array);
    return 0;
}
