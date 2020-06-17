#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int*ar = malloc(sizeof(long long int)*5);
    long long int a, sum = 0;
    for(a=0; a<5; a++){
        scanf("%lli", &*(ar+a));
        sum = sum + *(ar+a);
    }
    long long int min = *(ar);
        long long int max = *(ar);
        for(a=1; a<5; a++)
    {
        if(*(ar+a) > max)
            max = *(ar+a);
        if(*(ar+a) < min)
            min = *(ar+a);
    }
    long long int sum1 = sum - max;
    long long int sum2 = sum - min;
    printf("%lli %lli", sum1, sum2);
    return 0;
}
