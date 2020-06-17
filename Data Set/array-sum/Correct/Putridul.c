#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a[1000];
    int sum=0;
    int i, n;

    scanf("%d", &n);

    for(i=0;i<n;i++)
        scanf("%d", &a[i]);

    for(i=0;i<n;i++)
        sum=sum+a[i];

    printf("%d", sum);
    return 0;
}

