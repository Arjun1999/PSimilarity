#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void sort(int len, long long int * ary) {
    for (int i = 0; i < len; ++i) {
        for (int j = i+1; j < len; ++j) {
            if (ary[j] < ary[i]) {
                int temp = ary[j];
                ary[j] = ary[i];
                ary[i] = temp;
            }
        }
    }
}

long long int sum(int start, int end, long long int * ary) {
    long long int sum = 0;
    for (int i = start; i < end; ++i)
        sum += ary[i];
    return sum;
}

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int ary[5] = {a,b,c,d,e};
    sort(5, ary);
    long long int r1 = sum(0,4,ary);
    long long int r2 = sum(1,5,ary);
    printf("%lld %lld\n", r1, r2);
    return 0;
}
