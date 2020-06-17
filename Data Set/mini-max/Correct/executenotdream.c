
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    long long max = 0; long long min = 1000000001; int summax; int summin; long long ans = 0;
    long long *arr = (long long*)malloc(sizeof(long long) * 5);
    for(int i = 0; i < 5; i++){
        do
        {
            scanf("%lld",arr + i);
  
        } while(*(arr + i) < 1 || *(arr + i) > 1000000000);
        if(max < *(arr + i))
        {
            max = *(arr + i);
            summax = i;
        }
        if(min > *(arr + i))
        {
            min = *(arr + i);
            summin = i;
        }
        ans = ans + *(arr + i);
    }
    printf("%lld %lld",ans - *(arr + summax), ans - *(arr + summin));
    return 0;
}
