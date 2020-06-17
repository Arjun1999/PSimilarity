#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int  i, size, sum = 0;
    scanf("%d",&size);
    int a[size];
    for(i = 0;i < size; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < size; i++)
        sum = sum + a[i];
    printf("%d", sum);
    return 0;
}
