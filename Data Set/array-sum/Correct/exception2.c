#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n;
    scanf("%d",&n);
    int A[n];
    int sum=0,i;
    for(i=0;i<n;i++)
        {
        scanf("%d",&A[i]);
        sum+=A[i];
    }
    printf("%d\n",sum);
    return 0;
}
