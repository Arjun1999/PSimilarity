#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,sum=0;
    int *a;
    scanf("%d",&n);
    a =(int *)malloc(n * sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
       // printf(">%d\t",a[i]);
        sum = sum +a[i];
    }
    printf("%d\n",sum);
    return 0;
}
