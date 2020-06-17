#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N, *arr;
    int result = 0;
    scanf("%d", &N);
    arr = (int *)malloc(N*sizeof(int));
    if(arr == NULL)
        return 0;
    for(int i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
        result = result+arr[i];
    }
    printf("%d",result);
    return 0;
}
