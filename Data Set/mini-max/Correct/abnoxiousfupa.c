#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int n[5];
    scanf("%ld %ld %ld %ld %ld",&n[0],&n[1],&n[2],&n[3],&n[4]);
    long int sum = n[0] + n[1] +n[2] +n[3] +n[4];
    long int min = n[0];
    long int max = n[0];
    for(int i = 0; i <5; i++){
    if(n[i]> max)
       max = n[i];
    if(n[i] < min)
        min = n[i];}

printf("%ld %ld",sum-max, sum-min);
return 0;    
    return 0;
}
