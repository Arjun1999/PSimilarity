#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,i;
    scanf("%d",&n);
    int *a=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",a+i);
    int sum=0;
    for(i=0;i<n;i++)
        sum+=*(a+i);
    printf("%d",sum);
    free(a);
    return 0;
}
