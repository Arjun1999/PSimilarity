#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N;
    scanf("%d",&N);
    int a[N];
    int i;
    for(i=0;i<N;i++)
        scanf("%d ",&a[i]);
    int sum=0;
    for(i=0;i<N;i++)
        {
        sum+=a[i];
    }
    printf("%d",sum);
    return 0;
}
