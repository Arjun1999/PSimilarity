#include <stdio.h>
int main() {

   int n, a[1000], sum=0;
    scanf("%d", &n);
    while(n)
        {
        n--;
        scanf("%d", &a[n]);
        sum+=a[n];
    }
    printf("%d", sum);
    return 0;
}
