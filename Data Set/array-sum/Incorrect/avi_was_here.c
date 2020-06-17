#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,i,array[N];
    int sum=0;
    scanf("%d", &N);
    for(i=0; i<N; i++)
        {  
        scanf("%d", &array[i]);
        }
                for(i=0; i<N; i++)
              {
                        sum=sum+array[i];
              }
    printf("%d", sum);
    return 0;
}
