#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int i,j,k,sum=0;
    scanf("%d",&i);
    for(j=0;j<i;j++)
        {
        scanf("%d",&k);
        sum+=k;
    }
    printf("%d",sum);
    return 0;
}
