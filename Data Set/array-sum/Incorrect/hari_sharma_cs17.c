#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>



int main() {
    int n,s=0,a[100],i; 
    scanf("%i", &n);
    for(i = 0;i < n;i++){
       scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {s=s+a[i];}
    int result = s;
    printf("%d\n", result);
    return 0;
}
