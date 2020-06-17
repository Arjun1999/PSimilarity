#include <stdio.h>

int main() {
    int n, sum=0, c, i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&c);
        sum+=c;
    }
    printf("%d",sum);
    return 0;
}
