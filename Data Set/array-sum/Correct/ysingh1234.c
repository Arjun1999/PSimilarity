#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int array_size;
    int sum = 0;
    scanf ("%d", &array_size);
    int *a = malloc(sizeof(int)*array_size);
    for (int i = 0 ; i < array_size; i++ ) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("%d\n",sum);
    return 0;
}
