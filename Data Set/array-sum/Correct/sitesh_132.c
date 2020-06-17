#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int array[1000], n, sum=0;
    scanf("%d", &n);    
    for(int i=0; i<n; i++)
        scanf("%d", &array[i]);
    for(int i=0; i<n; i++)
        sum += array[i];
    printf("%d", sum);
    return 0;
}
