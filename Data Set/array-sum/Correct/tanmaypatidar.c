#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int a[1000],i,N,s=0;;    
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    s=s+a[i];
    }
    printf("%d",s);
    
    return 0;
}
