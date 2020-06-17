#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,in,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d ",&in);
        s=s+in;
    }
    printf("%d",s);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
