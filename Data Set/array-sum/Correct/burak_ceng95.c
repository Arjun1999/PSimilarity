#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int N, i, sum = 0;
    scanf(" %d", &N);
    while( N-- ){
        scanf(" %d", &i);
        sum += i;
    }
    printf("%d", sum);
    
    return 0;
}