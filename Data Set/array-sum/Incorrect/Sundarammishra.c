#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,a[10],sum=0,i; 
    scanf("%d",&n);
    for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]); 
    sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}
