#include <stdio.h>

int main()
{
    int N, i, sum = 0;
    scanf("%d", &N);
    
    int a[N];
    
    for(i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    
    printf("%d", sum);
    
    return 0;
}
