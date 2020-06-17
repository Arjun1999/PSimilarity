#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i,sum,a[5];
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
       scanf("%d",&a[i]);
    }
    for(sum=0,i=0;i<n;i++)
        sum += a[i];
    printf( "%d",sum);
        return 0;
}
