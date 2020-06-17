#include <stdio.h>
int main() {
int n;
    scanf("%d",&n);
    int A[n],sum=0,i;
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+A[i];
    }
    printf("%d",sum);
     
    return 0;
}
