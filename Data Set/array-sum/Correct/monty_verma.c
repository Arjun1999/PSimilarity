#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t,i,n,sum=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
        {
        scanf("%d",&n);
        sum+=n;
    }
    printf("%d",sum);
    return 0;
}
