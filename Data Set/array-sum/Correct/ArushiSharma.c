#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,ar[1000],i,sum=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
        {
        scanf("%d",&ar[i]);
        sum+=ar[i];
    }
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
