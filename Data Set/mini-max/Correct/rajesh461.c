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
    long int min_no=a, max_no=e;
    if(min_no > b) min_no = b;
    if(min_no > c) min_no = c;
    if(min_no > d) min_no = d;
    if(min_no > e) min_no = e;
    if(max_no < a) max_no = a;
    if(max_no < b) max_no = b;
    if(max_no < c) max_no = c;
    if(max_no < d) max_no = d;
    long int tot_sum = a+b+c+d+e;
    printf("%ld %ld", tot_sum-max_no, tot_sum-min_no);
    return 0;
}
