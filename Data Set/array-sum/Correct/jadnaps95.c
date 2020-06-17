#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int i;
    int ar[n];
    for(i = 0;i < n; i++){
        scanf("%d",&ar[i]);
    }
    int sum;
    sum = 0;
    for(i = 0; i < n; i++){
        sum += ar[i];
    }
    printf("%d",sum);
    return 0;
}
