#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,s=0;
    int N;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
        {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
        {
        s=s+a[i];
    }
    printf("%d",s);
    return 0;
}
