#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int array[] = {a,b,c,d,e};
    long long int temp;
    for (int i = 0; i < 5; i++) {
        for (int j = 1; j < 5 - i; j++) {
            if (array[j] < array[j-1]) {
                temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;
            }
        }
    }
    long long int min = array[0] + array[1] + array[2] + array[3];
    long long int max = array[1] + array[2] + array[3] + array[4];
    printf("%lld %lld",min,max);
    
    return 0;
}
