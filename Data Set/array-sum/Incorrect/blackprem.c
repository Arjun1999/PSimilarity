#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a[10];
    int N,i,sum;
    sum=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
        {
        scanf("%d",&a[i]);
        }
        
    for(i=0;i<N;i++)
        {
        sum=sum+a[i];
        }
    printf("%d",sum);
    return 0;
}
