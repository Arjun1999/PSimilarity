#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>



int main() {
    int n, ar[50],result,i; 
    scanf("%d", &n);
    for(i = 0; i < n; i ++)
    {
       scanf("%d",&ar[i]);
    }
    result= 0;
    for(i = 0; i< n; i ++)
    {
        result = result + ar[i];
    }
    printf("%d\n", result);
    return 0;
}
