#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define N 1000

int main() {
    
    int a[N],n,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("%d\n",sum);
    return 0;
}
