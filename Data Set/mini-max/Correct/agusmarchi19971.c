#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *a = malloc(sizeof(int) * 5);
    long int suma,me,ma;
    suma = 0;
    for(int i = 0; i < 5; i++){
       scanf("%d",&a[i]);
        if (i == 0) {
            ma = me = a[i];
        }
        if (a[i] < me) {
            me = a[i];
       }
        if (a[i] >= ma) {
            ma = a[i]; 
        }
        suma = suma + a[i];
    } 
    ma = suma - ma;
    me = suma - me;
    printf("%ld %ld", ma, me);
    return 0;
}
