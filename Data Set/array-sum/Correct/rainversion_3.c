#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int N;
    int a;
    scanf("%d",&N);
    int sum;
    sum=0;
    while(N>0)
        {
        scanf("%d",&a);
        sum=sum+a;
        N--;
        }
    printf("%d",sum);
    return 0;
}
