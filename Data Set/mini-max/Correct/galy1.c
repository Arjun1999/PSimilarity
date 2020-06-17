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
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    
    int i = 0;
    int id_p = 0;
    int id_g = 0;
    long long sum_p = 0;
    long long sum_g = 0;
    long int tab[5] = { a, b, c, d, e};
    
    while (i < 5)
    {
        if (tab[i] > tab[id_g])
            id_g = i;
        if (tab[i] < tab[id_p])
            id_p = i;
        i++;
    }
    
    i = 0;
    while (i < 5)
    {
        if (i != id_p)
            sum_g += tab[i];
        if (i != id_g)
            sum_p += tab[i];
        i++;
    }
    
    printf("%lld %lld", sum_p, sum_g);
    
    return 0;
}
