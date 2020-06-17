#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


    // Complete this function


int main() {
    int i,n,a[100],d=0; 
    scanf("%i", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    d=d+a[i];
    }
    printf("%d\n",d);
    return 0;
}
