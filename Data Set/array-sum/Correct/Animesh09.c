#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to SdskTDOUT */
    int a[1000],N,i,s=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    printf("%d",s);
    return 0;
}
