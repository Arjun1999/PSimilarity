#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n,x,ar[1000],sum=0;
    scanf("%d",&n);
    for(x=0;x<n;x++){
        scanf("%d",&ar[x]);
        printf("%d",ar[x]);
        sum=sum+ar[x];
    }
printf("\n%d",sum);
return 0;
}
