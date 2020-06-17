#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,*p,i,sum;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    sum=0;
    scanf("%d\n",&n);
    p=(int *)malloc(n*sizeof(int));
    
    for(i=0;i<n;i++)
        {
        scanf("%d ",&p[i]);
        sum+=p[i];
    }
    printf("%d",sum);
    return 0;
}
