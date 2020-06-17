#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int n;
scanf("%d",&n);

int arr[n];

for (int i = 0; i < n; i++) {
    arr[i] = i;

    printf("%d ", arr[i]);
}

printf("\n");

return 0;