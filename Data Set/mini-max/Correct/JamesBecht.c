#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    unsigned long long int a; 
    unsigned long long int b; 
    unsigned long long int c; 
    unsigned long long int d;
    unsigned long long int e;
    scanf("%llu %llu %llu %llu %llu",&a,&b,&c,&d,&e);
    unsigned long long int suma = b+c+d+e;
    unsigned long long int sumb = a+c+d+e;
    unsigned long long int sumc = a+b+d+e;
    unsigned long long int sumd = a+b+c+e;
    unsigned long long int sume = a+b+c+d;
    unsigned long long int minsum = a+b+c+d+e;
    unsigned long long int maxsum = 0;
    unsigned long long int sum_posint[]={suma, sumb, sumc, sumd, sume};
    for(int i=0; i<5; i++){
        if (sum_posint[i]<minsum){
            minsum = sum_posint[i];
        }
        if (sum_posint[i]>maxsum){
            maxsum = sum_posint[i];
        }
    }
    printf("%llu", minsum);
    printf("%s", " ");
    printf("%llu", maxsum);
    return 0;
}
