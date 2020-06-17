/* 
 * File:   main.c
 * Author: pgmreddy
 *
 * Created on 30 August, 2015, 2:56 PM
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printA(int *pArr, int arraySize) {
    int i = 0;
    for (i = 0; i < arraySize; i++) {
        printf("%d ", pArr[i]);
    }

    printf("\n");
}

unsigned long long sumOfElementsInArray(int *pArr, int arraySize) {
    int i = 0;
    unsigned long long sum = 0;
    for (i = 0; i < arraySize; i++) {
        sum = sum + pArr[i];
    }
    return sum;
}

int main() {
    int i = 0;

    int N;
    scanf("%d", &N);

    int *p = NULL;
    p = malloc(sizeof (int) *N);

    for (i = 0; i < N; i++) {
        scanf("%d", &p[i]);
    }

    // printA (p, N);

    printf("%llu ", sumOfElementsInArray(p, N));

    return 0;
}
