#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,i,j,sum=0;
    scanf("%d",&N);
    int a[N];
    for(j=0;j<N;j++) {
        scanf("%d",&a[j]);
    }
    for(i=0;i<N;i++) {
        sum=sum+a[i];
    }
            printf("%d",sum);

    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
