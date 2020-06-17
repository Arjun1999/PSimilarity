#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,t;
long int r=0;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++)
        {
        scanf("%d",&t);
        r=r+t;
    }
    printf("%ld",r);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
