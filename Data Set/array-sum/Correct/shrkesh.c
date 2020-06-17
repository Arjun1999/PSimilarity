#include <stdio.h>



int main() {
int n,i,sum;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    for(i=0;i<n;i++)
        sum+=A[i];
    printf("%d",sum);
    return 0;
}
