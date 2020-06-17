#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int sum;
    long int a;
    long int b;
    long int c;
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    sum = a + b + c + d + e;
    // find max
    long int maxi;
    maxi = a;
    if (maxi < b) maxi = b;
    if (maxi < c) maxi = c;
    if (maxi < d) maxi = d;
    if (maxi < e) maxi = e;
    // find min
    long int mini;
    mini = a;
    if (mini > b) mini = b;
    if (mini > c) mini = c;
    if (mini > d) mini = d;
    if (mini > e) mini = e;
    printf("%lld %lld", (sum - maxi), (sum - mini));
    return 0;
}
