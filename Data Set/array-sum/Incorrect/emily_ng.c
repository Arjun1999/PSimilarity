#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int A[1000];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size;
    int sum =0;
    scanf("%d\n", size);
    for (int i = 0; i<size; i++){
       sum +=  A[i];
    }
    printf("%d\n", sum);
    return 0;
}
