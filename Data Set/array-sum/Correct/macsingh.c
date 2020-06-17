#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    int n,i,sum=0,arr[1000];
    scanf("%d",&n);
    for(i=1;i<=n;i++) 
        {
        scanf("%d ",&arr[i]);
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}
