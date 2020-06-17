#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

// Complete the miniMaxSum function below.
int main(){
    int n=50, i, a[50],sum, sum1, count=0;
    for (i=0; i<n; i++){
        scanf ("%d", &a[i]);
        count ++;
    }
    for (i=0; i<count; i++){
        sum = a[i] + a[i+1];
        a[i+1]= sum;
        a[i] = a[i+1];      
    }
    for (i=1; i <= count; i++ ){
        sum1 = a[i] + a[i+1];
        a[i+1]= sum1;
        a[i] = a[i+1];
    }
    printf ("%d %d", sum, sum1);
    return 0;
}
