#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i,arr[50],s=0;
    scanf("%d", &n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
        {
        s=s+arr[i];
    }
    printf("%d",s);
    return 0;
}
