#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n;int s=0;
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(int i=1;i<=n;i++)
        s=s+a[i];
    printf("%d\n",s);
    return 0;
}
