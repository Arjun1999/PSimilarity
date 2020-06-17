#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    
    int N,tmp=0,sum=0,i;
    scanf("%d",&N);
    if (N>1000)
        return 0;
    for (i=0;i<N;i++)
        {
        scanf("%d",&tmp);
        sum=sum+tmp;
        }
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
