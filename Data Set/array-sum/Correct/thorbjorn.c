#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int N, i, temp, ans;
    scanf("%d", &N);
    for(i = 0; i < N; i++){
        scanf("%d", &temp);
        ans += temp;
    }
    printf("%d\n", ans);

    return 0;
}
