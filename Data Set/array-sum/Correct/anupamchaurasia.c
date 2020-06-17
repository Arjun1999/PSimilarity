#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N,i,a[1000],b=0;
    scanf("%d",&N);
    if(N>=1&&N<=1000)
        {
    for(i=0;i<N;i++)
        {
        scanf("%d",&a[i]);
        b=b+a[i];
    }
        printf("%d",b);
    }        
    return 0;
}
