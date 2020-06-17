#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int N,a[10000],sum=0,i;

   scanf("%d",&N);
    
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    
    for(i=0;i<N;i++)
        sum=sum+a[i];
    
    printf("%d",sum);
}
